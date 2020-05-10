#include <stdio.h>
#include <stdlib.h>

int main()
{  int dizi[4];
    int sayi;
    printf("Sayiyi giriniz(4 basamakli):\n");
    scanf("%d",&sayi);
    enbul(sayi,dizi);
    printf("En buyuk rakam:%d\n",dizi[3]);
    printf("En kucuk rakam:%d\n",dizi[0]);
    return 0;
}
int enbul(int sayi,int *dizi[]){
int kalan;
    int gecici = sayi;

    for(int i=0; i<5; i++)
    {
        kalan = gecici % 10;
        gecici /= 10;
        dizi[i]=kalan;

    }
 for(int i=0;i<4;i++){
        for(int j=1;j<4-i;j++){
            if(dizi[j-1]>dizi[j]){
                int yedek=dizi[j];
                dizi[j]=dizi[j-1];
                dizi[j-1]=yedek;
            }
        }
    }


}

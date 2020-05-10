#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int bileklikbul(int,int *[] );
int main()
{
    int dizi[5];
    int sayi;
    printf("sayi gir:(5 basamakli) ");
    scanf("%d",&sayi);

    bileklikbul(sayi,&dizi);
    if(dizi[4]==1)
    {
        printf("Cinsiyet(E:Erkek,K:Kiz):E\n");
    }
    else if(dizi[4]==2)
    {
        printf("Cinsiyet(E:Erkek,K:Kiz):K\n");
    }
    if(dizi[3]!=0)
    {
        printf("Hafta:%d%d\n",dizi[3],dizi[2]);
    }
    else
        printf("Hafta:%d\n",dizi[2]);
    if(dizi[1]!=0)
    {
        printf("Sira numarasi:%d%d\n",dizi[1],dizi[0]);
    }
    else
        printf("Sira numarasi:%d\n",dizi[0]);


    return 0;
}
int bileklikbul(int sayi,int *dizi[])
{
    int kalan;
    int gecici = sayi;

    for(int i=0; i<5; i++)
    {
        kalan = gecici % 10;
        gecici /= 10;
        dizi[i]=kalan;

    }
    /* for(int i=0;i<5;i++){

         printf("%d ",dizi[i]);

     }*/
}

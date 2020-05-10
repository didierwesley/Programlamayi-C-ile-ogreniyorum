#include <stdio.h>
#include <stdlib.h>

int main()
{   int saniye,saat,dakika,ek;
    int dizi[3];
    printf("Zamani giriniz(saat,dakika,saniye)\n");
    scanf("%d %d %d",&saat,&dakika,&saniye);
    printf("%d:%d:%d\n",saat,dakika,saniye);

    printf("eklenecek sureyi giriniz(saniye):");
    scanf("%d",&ek);
    printf("%d",dizi[0]);
    guncelle(ek,dizi);
    return 0;
}
int guncelle(int ek,int *saats,int *dakikas,int *saniyes){
int toplam;
    *haftas=toplam/168;
    toplam=toplam%168;
    *guns=toplam/24;
    *saats=toplam%24;




}

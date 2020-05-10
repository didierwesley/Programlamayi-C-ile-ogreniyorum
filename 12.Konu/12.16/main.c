#include <stdio.h>
#include <stdlib.h>
int arackoltuk(int ,int *[]);
int main()
{   int kisi;
    int dizi[2];
    printf("Tura kac kisi katilacak:\n");
    scanf("%d",&kisi);
    arackoltuk(kisi,dizi);
    printf("Bu tur  icin %d adet otobuse ihtiyac var\n",dizi[1]);
    printf("Turdaki bos koltuk sayisi:%d\n",dizi[0]);
    return 0;
}
int arackoltuk(int kisi,int *dizi[]){
int kalan=46-kisi%46;
int otobus=1+kisi/46;
dizi[0]=kalan;
dizi[1]=otobus;

}

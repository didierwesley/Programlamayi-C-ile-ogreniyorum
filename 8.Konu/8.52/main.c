#include <stdio.h>
#include <stdlib.h>


int main() {

    int sayi1, sayi2, kucukSayi,ekok;
    int i, sonuc = 1;

    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

    if(sayi1<sayi2){
        kucukSayi=sayi1;
    }
    else{
        kucukSayi=sayi1;
    }
    for(i=2;i<=kucukSayi;i++){
        if(sayi1%i==0&&sayi2%i==0){
            sonuc=i;
        }
    }
    printf("OBEB(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    ekok=(sayi1*sayi2)/sonuc;
    printf("Okek=%d",ekok);
    return 0;
}

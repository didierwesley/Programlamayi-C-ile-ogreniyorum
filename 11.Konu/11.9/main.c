#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int gunubul(int [],int );
int main()
{
    int a[10];
    int aranacak;
    printf("son 10 günün deðerlerini giriniz:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);

    }

float toplam=0;

float ort;
for(int i=0; i<10;i++){
toplam=toplam+a[i];

}
ort=toplam/10;
 printf("ortalama=%.2f\n", ort);



int kucuk,buyuk;

for(int i=0; i<10;i++){
         if(i == 0){  // Döngü ilk döndüðünde kucuk ve buyuk sayilar ilk deðerler olmasý lazým
            kucuk = a[i];
            buyuk = a[i];
        }
        else{  //Ýlk deðer atamasý deðil ise
            if(a[i] < kucuk)  // Küçük sayýdan daha küçük bir sayý girildi ise
                kucuk = a[i];

            if(a[i] > buyuk)     // Büyük sayýdan daha büyük bir sayý girldi ise
                buyuk = a[i];
        }


}printf("%d buyuk\n%d kucuk",buyuk,kucuk);
if(buyuk-ort>ort-kucuk)
    aranacak=buyuk;
    if(buyuk-ort<ort-kucuk)
    aranacak=kucuk;
    if(buyuk-ort==ort-kucuk)
    aranacak=buyuk;

gunubul(a[10],aranacak);

    return 0;
}
int gunubul(int a[],int aranacak){

    for(int i=0; i<10;i++)
         if(a[i]== aranacak)





return aranacak;
}



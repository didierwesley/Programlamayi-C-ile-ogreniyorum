#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int gunubul(int [],int );
int main()
{
    int a[10];
    int aranacak;
    printf("son 10 g�n�n de�erlerini giriniz:");
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
         if(i == 0){  // D�ng� ilk d�nd���nde kucuk ve buyuk sayilar ilk de�erler olmas� laz�m
            kucuk = a[i];
            buyuk = a[i];
        }
        else{  //�lk de�er atamas� de�il ise
            if(a[i] < kucuk)  // K���k say�dan daha k���k bir say� girildi ise
                kucuk = a[i];

            if(a[i] > buyuk)     // B�y�k say�dan daha b�y�k bir say� girldi ise
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



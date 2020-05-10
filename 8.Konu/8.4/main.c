#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
float ort;
int teksayi=0,toplam=0;
int sayi;
    printf("Lütfen 10 adet pozitif tam sayý giriniz...\n");
    for(int i=0;i<10;i++){
    printf("Lütfen %d. sayýyý giriniz\n",i+1);
           scanf("%d",&sayi);

        if(sayi%2!=0){
            toplam +=sayi;
                teksayi++;
        }
        }
    ort=toplam/teksayi;
    printf("Ortalama =%f",ort);



    return 0;
}

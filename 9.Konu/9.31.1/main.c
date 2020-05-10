#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
int basamakSayisiniBul(int sayi){
    int basamakSayisi=0;
while(sayi>0){
        basamakSayisi++;
        sayi=sayi/10;
}
return basamakSayisi;
}


int daireselmi(int sayi){
    int sayi1=0,sayi2=0;
    int basamakSayimiz=basamakSayisiniBul(sayi);
    int dizi[basamakSayimiz];
sayi1=sayi%10*pow(10,basamakSayimiz-1)+sayi/10;
sayi2=(sayi%10)*sayi;

if(sayi1==sayi2){
return 1;
}

    return 0;

}
int main()
{setlocale(LC_ALL,"Turkish");
int sayi;
    printf("sayi gir: ");
    scanf("%d",&sayi);


   printf("sayi = %d",daireselmi(sayi));

    return 0;
}

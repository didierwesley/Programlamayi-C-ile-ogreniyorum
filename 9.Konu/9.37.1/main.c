#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
//kaç basamak olduðunu buluyoruz.
int basamakSayisiniBul(int sayi){
    int basamakSayisi=0;
   while(sayi>0)   {

        basamakSayisi++;
        sayi=sayi/10;

}
return basamakSayisi;
}

int tersineCevir(int sayi){
int basamakSayimiz=basamakSayisiniBul(sayi);
    int dizi[basamakSayimiz];
    int basamakSayisi=0;
    //while döngüsüyle basamak deðerlerini diziye atýyoruz...
    while(sayi>0){
        basamakSayisi++;
        dizi[basamakSayisi-1]=sayi%10;
        sayi=sayi/10;
    }

    //for döngüsüyle tam tersini alýyoruz
    float sayininTersi=0;
    for(int i=0;i<basamakSayimiz;i++){
       sayininTersi =sayininTersi+dizi[i]*pow(10,basamakSayimiz-1-i);

    }

return sayininTersi;
}

int main()
{setlocale(LC_ALL,"Turkish");
int sayi;
    printf("sayi gir: ");
    scanf("%d",&sayi);

    printf("%d\n",tersineCevir(sayi));


    return 0;
}

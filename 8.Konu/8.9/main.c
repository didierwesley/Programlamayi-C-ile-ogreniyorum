#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int deger,sayi;
    int notr=0,negsayi=0,pozsayi=0;
    printf("Kaç adet sayý gireceksiniz");
    scanf("%d",&sayi);
    printf("sayilar(%d tane)",sayi);
    for(int i=0;i<sayi;i++){

           printf("Lütfen %d. sayýyý giriniz\n",i+1);
           scanf("%d",&deger);
           if(deger>0){
            pozsayi++;
           }
           else if(deger<0){
            negsayi++;
           }
           else{
            notr++;
           }
           }
    printf("%d pozitif %d negatif %d nötr\n",pozsayi,negsayi,notr);
    return 0;
}

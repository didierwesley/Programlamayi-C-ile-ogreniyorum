#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{setlocale(LC_ALL,"Turkish");
int yas,kilo;
float boy,indeks;
    printf("L�tfen ya��n�z� giriniz");
    scanf("%d",&yas);
    printf("L�tfen kilonuzu(kg) giriniz");
    scanf("%d",&kilo);
    printf("L�tfen boyunuzu(m) giriniz");
    scanf("%f",&boy);
    indeks=kilo/(boy*boy);
    printf("V�cut indeks:%.2f\n",indeks);
    if(yas>13&&yas<17){
        if(indeks>18.50&&indeks<25.0){

        }

        printf("Kazand�n�z");
    }
    else{

        printf("Kaybettiniz");
    }


    return 0;
}

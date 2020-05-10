#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{setlocale(LC_ALL,"Turkish");
int yas,kilo;
float boy,indeks;
    printf("Lütfen yaþýnýzý giriniz");
    scanf("%d",&yas);
    printf("Lütfen kilonuzu(kg) giriniz");
    scanf("%d",&kilo);
    printf("Lütfen boyunuzu(m) giriniz");
    scanf("%f",&boy);
    indeks=kilo/(boy*boy);
    printf("Vücut indeks:%.2f\n",indeks);
    if(yas>13&&yas<17){
        if(indeks>18.50&&indeks<25.0){

        }

        printf("Kazandýnýz");
    }
    else{

        printf("Kaybettiniz");
    }


    return 0;
}

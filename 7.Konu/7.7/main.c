#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    float kilo;
    float boy,ideale,idealk;
    char cinsiyet;
    printf("�ocu�un cinsiyetini giriniz:(e,E-k,K)=\n");
    scanf("%c",&cinsiyet);
    printf("Kilo=\n");
    scanf("%f",&kilo);
    printf("Boy(m)=\n");
    scanf("%f",&boy);

    printf("---------------\n");


if((cinsiyet=='e'||cinsiyet=='E')){
        ideale=48+((boy-1.5)/0.025)*2.7;
if(kilo>ideale){
    printf("ideal kilo:%f\n",ideale);
                    printf("�deal kilonuzdan a��rs�n�z\n");
}


else{
    printf("ideal kilo:%f\n",ideale);

    printf("�deal kilonuzdan hafifsiniz\n");
}
}

if((cinsiyet=='k'||cinsiyet=='K')){
              idealk=45+((boy-1.5)/0.025)*2.2;
if(kilo>idealk){
    printf("ideal kilo:%f\n",idealk);
                    printf("�deal kilonuzdan a��rs�n�z");
}


else{
    printf("ideal boy:%f\n",ideale);

   printf("�deal kilonuzdan hafifsiniz\n");
}
}
    return 0;
}

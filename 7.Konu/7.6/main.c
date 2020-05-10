 #include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    float aboy,bboy,heboy,hkboy;
    char cinsiyet;
    printf("Çocuðun cinsiyetini giriniz:(e,E-k,K)=\n");
    scanf("%c",&cinsiyet);
    printf("Babasýnýn boyu(m)=\n");
    scanf("%f",&bboy);
    printf("Annesinin boyu(m)=\n");
    scanf("%f",&aboy);
    printf("---------------\n");


if((cinsiyet=='e'||cinsiyet=='E')){
        heboy=(aboy+bboy+0.13)/2;
if(heboy>1.75){
    printf("Hedef boy:%f\n",heboy);
                    printf("Türkiye ortalamasý üstü");
}


else{
    printf("Hedef boy:%f\n",heboy);

    printf("Malesef elendiniz...\n");
}
}

if((cinsiyet=='k'||cinsiyet=='K')){
        heboy=(aboy+bboy-0.13)/2;
if(heboy>1.63){
    printf("Hedef boy:%f\n",heboy);
                    printf("Türkiye ortalamasý üstü");
}


else{
    printf("Hedef boy:%f\n",heboy);

    printf("Malesef elendiniz...\n");
}
}
    return 0;
}

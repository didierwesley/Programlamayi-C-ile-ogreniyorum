#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    float sayi1,sayi2,sayi3;
    float yedek;
    printf("Lütfen 3 tane sayı giriniz:\n");
    scanf("%f%f%f",&sayi1,&sayi2,&sayi3);
    printf("girilenlerin sıralı hali:\n");
    if(sayi1>sayi2){
        yedek=sayi1;
        sayi1=sayi2;
        sayi2=yedek;
    }
    if(sayi2>sayi3){
        yedek=sayi2;
        sayi2=sayi3;
        sayi3=yedek;
    }
    if(sayi1>sayi2){
        yedek=sayi1;
        sayi1=sayi2;
        sayi2=yedek;
    }
    printf("%f %f %f",sayi1,sayi2,sayi3);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi,a,b,c,d,yedek;
    printf("4 basamaklý bir sayý giriniz:");
    scanf("%d",&sayi);
    yedek=sayi;
    d=sayi%10;
    sayi/=10;
    c=sayi%10;
    sayi/=10;
    b=sayi%10;
    sayi/=10;
    a=sayi%10;
    if((10*a+b)*(10*c+d)==(10*b+a)*(10*d+c)){
        printf("%d sayý tersyüz sayýdýr",yedek);

    }
    else{
        printf("%d Deðildir",yedek);
    }

    return 0;
}

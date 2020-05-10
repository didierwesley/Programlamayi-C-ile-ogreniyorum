#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi,a,b,c,d,yedek,x;
    printf("4 basamaklı bir sayı giriniz:");
    scanf("%d",&sayi);
    yedek=sayi;
    d=sayi%10;
    sayi/=10;
    c=sayi%10;
    sayi/=10;
    b=sayi%10;
    sayi/=10;
    a=sayi%10;
    x=a+b+c+d;
    if(x*x*x==yedek){
        printf("%d sayı dolduran sayıdır",yedek);

    }
    else{
        printf("%d Değildir",yedek);
    }

    return 0;
}

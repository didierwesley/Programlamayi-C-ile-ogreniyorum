#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi,a,b,c,yedek;
    printf("3 basamakl� bir say� giriniz:");
    scanf("%d",&sayi);
    yedek=sayi;
    c=sayi%10;
    sayi/=10;
    b=sayi%10;
    sayi/=10;
    a=sayi%10;
    if(a>b&&a>c){
        printf("Ba�tan 1'ci say�");

    }
    else if(b>a&&b>c){
        printf("Ba�tan 2");

    }else if(c>a&&c>b){
        printf("Ba�tan 3");
             }
             else printf("L�tfen rakamlar� farkl� 3 basamakl� bir say� giriniz");



    return 0;
}

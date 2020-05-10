#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi,a,b,c,yedek;
    printf("3 basamaklý bir sayý giriniz:");
    scanf("%d",&sayi);
    yedek=sayi;
    c=sayi%10;
    sayi/=10;
    b=sayi%10;
    sayi/=10;
    a=sayi%10;
    if(a>b&&a>c){
        printf("Baþtan 1'ci sayý");

    }
    else if(b>a&&b>c){
        printf("Baþtan 2");

    }else if(c>a&&c>b){
        printf("Baþtan 3");
             }
             else printf("Lütfen rakamlarý farklý 3 basamaklý bir sayý giriniz");



    return 0;
}

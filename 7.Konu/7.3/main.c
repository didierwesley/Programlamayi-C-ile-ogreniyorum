#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    int b1,b2,b3,b4,b5;
    printf("L�tfen 5 basamakl� bir say� giriniz:");
    scanf("%d",&sayi);
    b1=sayi%10;
    sayi/=10;
     b2=sayi%10;
    sayi/=10;
    b3=sayi%10;
    sayi/=10;
     b4=sayi%10;
    sayi/=10;
     b5=sayi%10;
    sayi/=10;

    if(b1==b5&&b2==b4){
    printf("%d%d%d%d%d palindrome say�d�r",b1,b2,b3,b4,b5);
    }
    else {
    printf("%d%d%d%d%d palindrome say� de�ildir",b5,b4,b3,b2,b1);
    }

    return 0;
}

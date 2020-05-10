#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    int b1,b2,b3,b4,b5;
    printf("Lütfen 5 basamaklý bir sayý giriniz:");
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
    printf("%d%d%d%d%d palindrome sayýdýr",b1,b2,b3,b4,b5);
    }
    else {
    printf("%d%d%d%d%d palindrome sayý deðildir",b5,b4,b3,b2,b1);
    }

    return 0;
}

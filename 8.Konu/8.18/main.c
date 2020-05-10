#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    int i=1;
    printf("5 adet sayý giriniz");

    for( ;i<=5;i++){
         scanf("%d",&sayi);
    for(int j=1;j<=sayi;j++){
 printf("*");}

 printf("\n");
    }

    return 0;
}

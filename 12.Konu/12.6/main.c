#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    int tektop=0;
    int cifttop=0;
    int sayi;
    printf("Sayiyi giriniz\n");
    scanf("%d",&sayi);
    while(sayi){
        y=sayi%10;
        sayi=sayi/10;
        if(y%2==1){
            tektop++;
        }
        if(y%2==0){
            cifttop++;
        }

    }
    printf("%d tane tek %d tane cift",tektop,cifttop);
    return 0;
}

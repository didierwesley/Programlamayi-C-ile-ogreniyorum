#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int i,test=1,sayi;
    printf("1 ile 20 aras�ndaki asal say�lar:\n");

    scanf("%d",&sayi);
    if(sayi==1)
    test=0;

    for(i=sayi-1;i>1&&test==1;i--){
        if(sayi%i==0){
            test=0;}

        if(test){
                printf("Say� asald�r\n");}

        else printf("De�il");
    }

    return 0;
}

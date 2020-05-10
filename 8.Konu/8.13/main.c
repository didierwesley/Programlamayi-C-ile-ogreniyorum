#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int n;
    printf("Bir sayý giriniz...");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){

        for(int j=1;j<=i;j++){
            printf("O ");
        }printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int n;
    printf("Bir say� giriniz...");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){
            printf("O ");
        }printf("\n");
    }
    return 0;
}

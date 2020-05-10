#include <stdio.h>
#include <stdlib.h>
#define M 6
int main()
{
    int dizi[M];
    int i,sayi;
    printf("Sayilari giriniz:");
    for(i=0;i<6;i++)
    scanf("%d",&dizi[i]);


    printf("Sayilar ve histogramlar:\n");
    for(i=0;i<6;i++){
    printf("%d ",dizi[i]);
    for(int j=1;j<=dizi[i];j++){

    printf("*");}

    printf("\n");
    }


    return 0;
}

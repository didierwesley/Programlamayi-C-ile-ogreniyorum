#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void asal_mi(int sayi){
int sayac=0;
if(sayi>0){
for(int i=2;i<sayi;i++){
        if(sayi%i==0){
            sayac++;
}

    }
    if(sayac==0){
        printf("Asal");
    }
    else{
        printf("degil");
    }
    if(sayi==1){
            printf("Degil");
        }

}
return 1;
}
int main()
{
    int bas;
    setlocale(LC_ALL,"Turkish");
    printf("Sayý=");
    scanf("%d",&bas);

    asal_mi(bas);

    return 0;
}

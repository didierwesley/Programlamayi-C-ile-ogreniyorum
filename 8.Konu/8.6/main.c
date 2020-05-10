#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int baslangic,bitis,i;
    int ciftsayi=0;
    printf("Baþlangýç ve bitiþ deðerlerini giriniz...\n");
    scanf("%d%d",&baslangic,&bitis);
    printf("Sayýlar þunlardýr:");
        for(int i=baslangic;i<=bitis;i++){
        if(i%4==0){
            printf("%d ",i);
            ciftsayi++;
    }
      }printf("(%d adettir):",ciftsayi);



    return 0;
}

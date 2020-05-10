#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 4
int main()
{

    int dizi[M][N];
    int satir[M]={0};

    printf("20 tane sayi girin");
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
          scanf("%d",&dizi[i][j]);

        }}
         for(int i=0;i<5;i++){
                printf("\n");
        for(int j=0;j<4;j++){
          printf("%d ",dizi[i][j]);

        }}
        for(int i=0;i<5;i++){

        for(int j=0;j<4;j++){
         satir[i]=satir[i]+dizi[i][j];

        }}
         printf("\n");

         for(int i=0;i<5;i++){
                printf("%d. satir toplami %d \n",i+1,satir[i]);



 }
 int enbuyuk=satir[0];

 for(int i=0;i<5;i++){

if(satir[i]>enbuyuk){
 enbuyuk=satir[i];


 }



 }sayac
 for(int i=0;i<5;i++){

if(satir[i]>enbuyuk){
 enbuyuk=satir[i];


 }



 }

printf("%d en buyuk satir ve  toplami %d \n",i+1,enbuyuk);
 return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 5
#define L 10
int main()
{
    int a[M];
    int b[N];
    int c[L];
    int i;
    printf("a dizisinin Sayilari giriniz:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
      printf("b dizisinin Sayilari giriniz:");
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);

  printf("C dizisiniz Sayilari= ");



    for(i=0;i<5;i++){
        c[i]=a[i];}


for ( i= 0; i <5 ; i++){
        for(i=0;i<5;i++)
        c[i+N]=b[i];



}
for ( i= 0; i <10 ; i++){
        printf("%d ",c[i]);



}


    return 0;
}

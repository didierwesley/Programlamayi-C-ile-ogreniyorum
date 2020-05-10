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
    int gecis,yedek;
    printf("c dizisinin Sayilari giriniz:");
    for(i=0;i<10;i++)
    scanf("%d",&c[i]);




    for(i=0;i<5;i++){
       a[i]= c[i];}

for(i=0;i<5;i++)
       b[i]= c[i+N];




printf("a dizisinin elemanlari ");
for ( i= 0; i <5 ; i++){
        printf("%d ",a[i]);



}printf("\n");
printf("b dizisinin elemanlari ");

for ( i= 0; i <5 ; i++){
        printf("%d ",b[i]);



}
printf("\n");


    return 0;
}

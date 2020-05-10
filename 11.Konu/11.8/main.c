#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 5

int main()
{
    int a[M];
    int b[N];
    int c[10];
    int i;
    float toplam=0;
    float ort;
    printf("a dizisinin Sayilari giriniz:");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
      printf("b dizisinin Sayilari giriniz:");
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);





    for(i=0;i<5;i++){
        c[i]=a[i];}


for ( i= 0; i <5 ; i++){
        for(i=0;i<5;i++)
        c[i+N]=b[i];



}
/*for ( i= 0; i <10 ; i++){
        printf("%d ",c[i]);
}*/

for ( i= 0; i <10 ; i++){
       toplam=toplam+c[i];




}
ort=toplam/10;
printf("ortalama= %.2f",ort);
printf("\n");
printf("c nin elemanlari= ");
for ( i= 0; i <10 ; i++){
        if(c[i]>=ort){
        printf("%d ",c[i]);}
}
//sýralýyoruz
/*for(gecis=1;gecis<10;gecis++){
        for(i=0;i<9;i++)
        if(c[i]>c[i+1]){
            yedek=c[i];
            c[i]=c[i+1];
            c[i+1]=yedek;
        }

}
printf("C dizisinin sirali Sayilari= ");
for ( i= 0; i <10 ; i++){
        printf("%d ",c[i]);
}
*/

    return 0;
}

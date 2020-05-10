#include <stdio.h>
#include <stdlib.h>
#define L 10
en_kucuk_bul(int c[] ){
int enKucuk= c[0];
for(int i=1; i<10;i++){
    if(c[i]<enKucuk)
        enKucuk=c[i];

}
return enKucuk;

}
int main()
{

    int c[L];
    int i;
    int gecis,yedek;
    printf("c dizisinin Sayilari giriniz:");
    for(i=0;i<10;i++)
    scanf("%d",&c[i]);
   printf("%d en kucuk", en_kucuk_bul(c));

    return 0;
}

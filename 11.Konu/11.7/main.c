#include <stdio.h>
#include <stdlib.h>
#define L 10

ortalama(int [] );
int main()
{

    int c[L];
    int i;

    printf("c dizisinin Sayilari giriniz:");
    for(i=0;i<10;i++)
    scanf("%d",&c[i]);
    ortalama(c);


    return 0;
}


ortalama(int c[] ){
float toplam=0;

float ort;
for(int i=0; i<10;i++){
toplam=toplam+c[i];

}
ort=toplam/10;
 printf("ortalama=%.2f\n", ort);


 printf("a dizisinin elemanlari=");
 for(int i=0; i<10;i++){
        if(c[i]>=ort)
        printf("%d ",c[i]);


}printf("\n");
printf("b dizisinin elemanlari=");
 for(int i=0; i<10;i++){
        if(c[i]<ort)
        printf("%d ",c[i]);


}




return ort;
}

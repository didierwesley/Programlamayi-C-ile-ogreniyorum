#include <stdio.h>
#include <stdlib.h>
void hesapla (int , int *, int *, int *);
int main()
{
    int toplam,hafta,gun,saat;
    printf("Isin bitme suresini yaziniz:(saat)\n");
    scanf("%d",&toplam);
    hesapla (toplam, &hafta, &gun, &saat);
    printf(" %d hafta %d gun %d saat surer ",hafta,gun,saat);
    return 0;
}
void hesapla(int toplam,int *haftas,int *guns,int *saats){
    *haftas=toplam/168;
    toplam=toplam%168;
    *guns=toplam/24;
    *saats=toplam%24;




}

#include <stdio.h>
#include <stdlib.h>
void hesapla (int , int *, int *, int *);
int main()
{
    int toplam,yil,ay,gun;
    printf("Isin bitme suresini yaziniz:\n");
    scanf("%d",&toplam);
    hesapla (toplam, &yil, &ay, &gun);
    printf("%d yil %d ay %d gun surer ",yil,ay,gun);
    return 0;
}
void hesapla(int toplam,int *yils,int *ays,int *guns){
    *yils=toplam/365;
    toplam=toplam%365;
    *ays=toplam/30;
    *guns=toplam%30;


}

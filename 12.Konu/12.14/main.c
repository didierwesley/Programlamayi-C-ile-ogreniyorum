#include <stdio.h>
#include <stdlib.h>
void yavrusayiscinsiyetibul(int ,int *[]);
int main()
{
    int yumurta;
    int dizi[1];
    float sicaklik;

    printf("Kulucka sicakligini giriniz(C):");
    scanf("%f",&sicaklik);
    printf("Yumurta sayisini giriniz:");
    scanf("%d",&yumurta);

    if(sicaklik>=28&&sicaklik<31){printf("Cikacak yavrularin Cinsiyeti(D:Disi,E:Erkek):D\n");}
    if(sicaklik>=31&&sicaklik<34){printf("Cikacak yavrularin Cinsiyeti(D:Disi,E:Erkek):E\n");}
    yavrusayiscinsiyetibul(yumurta,dizi);
    printf("Cikacak yavru sayisi=%d",dizi[0]);

    return 0;
}
void yavrusayiscinsiyetibul(int yumurta,int *dizi[] )
{

int yeni_yumurta=0;
yumurta=yumurta-yumurta/10;
yeni_yumurta+=yumurta;
dizi[0]=yeni_yumurta;


}


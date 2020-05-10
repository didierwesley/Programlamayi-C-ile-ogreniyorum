#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<locale.h>

float toplam_mesafe(float ilk_hiz,float alfa,float h_ksuresi){

float sonuc;
sonuc=ilk_hiz*cos(alfa*M_PI/180)*h_ksuresi;
return sonuc;

}

int main()
{
    int acim;
    float hiz,sure;
    setlocale(LC_ALL,"Turkish");
    printf("Ýlk hýzý girin");
    scanf("%f",&hiz);
    printf("Açýyý girin");
    scanf("%d",&acim);
    printf("süreyi girin");
    scanf("%f",&sure);

    printf("sonuc=%f\n",toplam_mesafe(hiz,acim,sure));
    return 0;
}

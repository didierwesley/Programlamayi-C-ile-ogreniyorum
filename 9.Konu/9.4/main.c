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
    printf("�lk h�z� girin");
    scanf("%f",&hiz);
    printf("A��y� girin");
    scanf("%d",&acim);
    printf("s�reyi girin");
    scanf("%f",&sure);

    printf("sonuc=%f\n",toplam_mesafe(hiz,acim,sure));
    return 0;
}

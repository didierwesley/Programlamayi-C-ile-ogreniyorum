#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{setlocale(LC_ALL,"Turkish");
    int tyanlis,myanlis,iyanlis;
    float tpuan,mpuan,ipuan;

    printf("Trafik yanl�� say�n�z� giriniz:");
    scanf("%d",&tyanlis);
    printf("Motor yanl�� say�n�z� giriniz:");
    scanf("%d",&myanlis);
    printf("ilkyard�m yanl�� say�n�z� giriniz:");
    scanf("%d",&iyanlis);


    printf("Trafik puan�n�z=%.2f\n",tpuan=100-tyanlis*2);
    printf("Motor puan�n�z=%.2f\n", mpuan=100-myanlis*2.5);
    printf("�lk yard�m puan�n�z=%.2f\n",ipuan=100-iyanlis*3.33);
    if(tpuan>70&&mpuan>70&&ipuan>70){
        printf("S�nav� ge�tiniz\n");

    }
    else{
        printf("S�navdan kald�n�z...\n");
    }

    return 0;
}

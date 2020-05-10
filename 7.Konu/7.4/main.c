#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{setlocale(LC_ALL,"Turkish");
    int tyanlis,myanlis,iyanlis;
    float tpuan,mpuan,ipuan;

    printf("Trafik yanlýþ sayýnýzý giriniz:");
    scanf("%d",&tyanlis);
    printf("Motor yanlýþ sayýnýzý giriniz:");
    scanf("%d",&myanlis);
    printf("ilkyardým yanlýþ sayýnýzý giriniz:");
    scanf("%d",&iyanlis);


    printf("Trafik puanýnýz=%.2f\n",tpuan=100-tyanlis*2);
    printf("Motor puanýnýz=%.2f\n", mpuan=100-myanlis*2.5);
    printf("Ýlk yardým puanýnýz=%.2f\n",ipuan=100-iyanlis*3.33);
    if(tpuan>70&&mpuan>70&&ipuan>70){
        printf("Sýnavý geçtiniz\n");

    }
    else{
        printf("Sýnavdan kaldýnýz...\n");
    }

    return 0;
}

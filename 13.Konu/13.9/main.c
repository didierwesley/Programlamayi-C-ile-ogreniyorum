#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char zaman1[9];
    double saat1,dakika1,saniye1;
    char *saatp1,*dakikap1,*saniyep1;
    char zaman2[9];
    double saat2,dakika2,saniye2;
    char *saatp2,*dakikap2,*saniyep2;
    double saatfark,dakikafark,saniyefark,sonuc;
    printf("1.zamani giriniz:");
    scanf("%s",&zaman1);
    saat1=strtod(zaman1,&saatp1);
    dakika1=strtod(zaman1+3,&dakikap1);
    saniye1=strtod(zaman1+3,&saniyep1);
    printf("2.zamani giriniz:");
    scanf("%s",&zaman2);
    saat2=strtod(zaman2,&saatp2);
    dakika2=strtod(zaman2+3,&dakikap2);
    saniye2=strtod(zaman2+3,&saniyep2);
    if(saat1>saat2){
        saatfark=saat1-saat2;
        dakikafark=dakika1-dakika2;
        saniyefark=saniye1-saniye2;
        sonuc=(saatfark*3600)+(dakikafark*60)+(saniyefark);
    }
else if(saat2>saat1){
        saatfark=saat2-saat1;
        dakikafark=dakika2-dakika1;
        saniyefark=saniye2-saniye1;
        sonuc=(saatfark*3600)+(dakikafark*60)+(saniyefark);
    }
    else if(saat1=saat2){
        if(dakika1>dakika2){
            dakikafark=dakika1-dakika2;
        saniyefark=saniye1-saniye2;
        sonuc=(dakikafark*60)+(saniyefark);
        }
        else if(dakika2>dakika1){
            dakikafark=dakika2-dakika1;
        saniyefark=saniye2-saniye1;
        sonuc=(dakikafark*60)+(saniyefark);
        }
        else {  sonuc=fabs(saniye2-saniye1);  }

    }
    printf("Sonuc=%.lf saniyedir.\n",sonuc);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
float integral(float a,float b){
float h,sonuc,integralim;
h=(b-a)/1000;
for(int k=1;k<1000;k++){
        int sonuc;
sonuc= a+k*h;
sonuc++;

    }
integralim=h*((3*pow(a,5)+5*a)/2+(3*pow(b,5)+5*b)/2+sonuc);
return integralim;
}
int main()
{float a1,b1;
    setlocale(LC_ALL,"Turkish");
    printf("L�tfen a de�erini giriniz...");
    scanf("%f",&a1);
    printf("L�tfen b de�erini giriniz...");
    scanf("%f",&b1);
    printf("3.x^5+5.x in (%f,%f) aras�ndaki integral de�eri=%f",a1,b1,integral(a1,b1));

    return 0;
}

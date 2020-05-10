#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
float hesap(float bir1,float yarim1,float ceyrek1,float onda1){
float sonuc;
sonuc=(bir1/0.0082)+0.5*(yarim1/0.0062)+0.25*(ceyrek1/0.004)+0.1*(onda1/0.00315);
return sonuc;

}
int main()
{
    setlocale(LC_ALL,"Turkish");
    float bir,yarim,ceyrek,onda;
    printf("Bozuklýklarýn aðýrlýklarýný sýrasýyla kg cinsinden giriniz\n");
    printf("Sýrasýyla 1 TL,50 kuruþ,25 kuruþ,10 kuruþ...\n");
    scanf("%f%f%f%f",&bir,&yarim,&ceyrek,&onda);

    printf("Ederi=%f",hesap(bir,yarim,ceyrek,onda));
    return 0;
}

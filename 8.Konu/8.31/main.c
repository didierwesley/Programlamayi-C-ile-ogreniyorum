#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi,enBuyuk2=0,enBuyuk1=0;
    int dizi[10];

    for(int i=1;i<=10;i++){
        printf("%d.sayý=",i);
        scanf("%d",&dizi[i]);
    }

    for(int i=1;i<=10;i++){


        if  (dizi[i]>enBuyuk1)
        {   enBuyuk1=dizi[i];


           }

        if (dizi[i]>enBuyuk2&&dizi[i]<enBuyuk1){

            enBuyuk2=dizi[i];

        }

    }
    printf("En büyük=%d\n",enBuyuk1);
    printf("2.En büyük=%d\n",enBuyuk2);



    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int basamak(int x){
int basamaksayisi=0;
while(x>0){
  basamaksayisi++;
  x=x/10;

}

return basamaksayisi;
}
int sagdan(int x){
int basamaksayimiz=basamak(x);
setlocale(LC_ALL,"Turkish");
int dizi[basamaksayimiz];
int basamaksayisi=0;


    //while döngüsüyle basamak deðerlerini diziye atýyoruz...
    while(x>0){
        basamaksayisi++;
        dizi[basamaksayisi-1]=x%10;
        x=x/10;
    }
    int enBuyuk=0;
    int i=0;

    //ciftsay
    /*int sayac=0;
  for(;i<basamaksayimiz;i++){
        if(dizi[i]%2==0){
            sayac++;
        }
    }
    printf("%d\n",sayac);


*/
    for(;i<basamaksayimiz;i++){
                if  (dizi[i]>enBuyuk)
        {
             enBuyuk=dizi[i];




           }

    }printf("sağdan %d.eleman %d en büyüktür.",i-1,enBuyuk);





return enBuyuk;

}

int main()

{   setlocale(LC_ALL,"Turkish");


    printf("%d\n",sagdan(57945782));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

int bileklikbul(int ,int *,int *,int * );
int main()
{
setlocale(LC_ALL,"Turkish");
int sayi;
int hafta,sira_no;
int cinsiyet;
    printf("sayi gir:(5 basamakli) ");
    scanf("%d",&sayi);

bileklikbul(sayi,&cinsiyet,&hafta,&sira_no);
printf("Sayi:%d\n",sayi);
printf("cinsiyet:%d\n",cinsiyet);


    return 0;
}
int bileklikbul(int sayi,int *cinsiyet,int *hafta,int *sira_no){
    int dizi[5];
    int basamakSayisi=0;
    while(sayi>0){
        basamakSayisi++;
        dizi[basamakSayisi-1]=sayi%10;
        sayi=sayi/10;
    }



    if(dizi[4]==1){
        cinsiyet=1;
    }
    else if(dizi[4]==2){
        cinsiyet=0;
    }


}

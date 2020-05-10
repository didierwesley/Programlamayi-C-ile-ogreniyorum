#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
int enBuyukMulayim(int sayi)
{
	int carpim,toplam,sayi1,sayi2;

	sayi1=pow(10,sayi)-1;

	for(;sayi1>=0;sayi1--)
	{
		sayi2=sayi1;
		toplam=0;
		carpim=0;

		while(sayi2>=1)
		{
			toplam+=(sayi2%10);
			carpim*=(sayi2%10);
			sayi2/=10;
		}

		if(sayi1==(toplam*carpim)){
			return sayi1;
		}

	}
 }


int main()
{
	setlocale(LC_ALL, "Turkish");
	int basamak;

	printf("basamak sayýsýný giriniz:\n");
	scanf("%d",&basamak);

	printf("en buyuk mulayim sayý: %d",enBuyukMulayim(basamak));

	return 0;
}


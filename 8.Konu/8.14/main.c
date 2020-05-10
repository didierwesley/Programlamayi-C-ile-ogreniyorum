#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");


	int sayi, top = 0, i,a;
	printf("Deger: ");
	scanf("%d", &sayi);
	a=sayi;
	for (i = 1; i <= sayi; i++)
	{
		for(;a>0;a=a-a/2){
            top=top+a*a;
		}
	}
	printf("Toplam= %d\n", top);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{  int i;
    int x;
    int toplam=0;
    char sayilar[4][10];
    printf("4 adet tamsayi icerikli dizgiyi giriniz: ");

    for (i=0; i<4; i++) {
        fgets(sayilar[i], 10, stdin);
        x=atoi(sayilar[i]);
        toplam=toplam+x;
    }
    printf("\nGirdiginiz sayilarin toplami = %d'dir.\n",toplam);

    return 0;
}

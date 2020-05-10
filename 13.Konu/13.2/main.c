#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{ char s[256]; //255 karakter girilirse 256.karakter '\0' olacagindan 256 karakterlik yer verdim.
    int charsayi=0; //cumle uzunlugunu olcmek icin tanimladik.
    int sayac=0;  //  a veya A larýn kac tane oldugunu sayacak olan sayac.
    int i;
    printf("Cumlenizi giriniz: ");

    fgets(s, 256, stdin);

    while (s[charsayi] != '\0') {
        charsayi++; //cumle uzunlugunu olcuyoruz.
    }

    for (i=0; i<=charsayi; i++) { //cumlenin sonuna kadar her karateri
        if(s[i]=='a'|| s[i]=='A') //a veya A mý diye kontrol ediyoruz.
            sayac++; //uyarsa sayaci arttiriyoruz.
    }
     printf("\nCumle icinde %d tane 'a' ya da 'A' gecmektedir.\n",sayac);
    return 0;
}

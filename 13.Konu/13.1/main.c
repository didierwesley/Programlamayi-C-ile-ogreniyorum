#include <stdio.h>
#include <stdlib.h>

int main() {

    char kelime[225]; //klavyeden alincak cumlenin degiskeni.
    int i,sayac=0;
    printf("Girilen cumlede kac kelime oldugunu bulur.\n");
    printf("Kelimeyi girin: ");
    fgets(kelime, 225, stdin);
    for(i=0;kelime[i]!='\0';i++){
        if(isspace(kelime[i])) //bosluk gordukce kelime sayisi arttirmaya dayali isler.
            sayac++;
    }
    printf("Girdiginiz cumle %d kelimeden olusmustur.",sayac);

    return 0;
}

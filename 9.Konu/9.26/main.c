#include <stdio.h>
#include <stdlib.h>
void erteleme_mesaj(int x){


switch(x){
case 1:printf("yazin gideriz...");break;
case 2:printf("yazin gideriz...");break;
case 3:printf("sonbahar gideriz...");break;
case 4:printf("sonbahar gideriz...");break;
case 5:printf("sonbahar gideriz...");break;
case 6:printf("kis gideriz...");break;
case 7:printf("kis gideriz...");break;
case 8:printf("kis gideriz...");break;
case 9:printf("ilkbahar gideriz...");break;
case 10:printf("ilkbahar gideriz...");break;
case 11:printf("ilkbahar gideriz...");break;
case 12:printf("yazin gideriz...");break;
default: printf("yanlis");



}
return x;



}


int main()
{
int y;
    erteleme_mesaj(1);
    erteleme_mesaj(10);

    return 0;
}

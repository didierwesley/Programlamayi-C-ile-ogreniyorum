#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
  int sayi=0,basamaksayisi=0,tek=0,iki=0;

while(basamaksayisi<3){

printf("Sayiyi Giriniz : ");
scanf("%d",&sayi);
basamaksayisi=1;
while(sayi>1){
    sayi/=10;
basamaksayisi++;

}
printf("Sayımız %d Basamaklıdır. \n",basamaksayisi);
if(basamaksayisi>=3)
    break;

if(basamaksayisi==1){
    tek++;
}
 if(basamaksayisi==2){
    iki++;
}


}
printf("%d tane sayıdan %d tekbasamaklı,%d iki basamaklı",tek+iki+1,tek,iki);

    return 0;
}

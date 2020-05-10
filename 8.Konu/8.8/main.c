#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    int ciftsayi=0;

    printf("Sayýlar bunlardýr:");

        for(int i=1986;i<=3411;i+=75){
printf("%d\n",i);
if(i>=2000&&i<3000){
ciftsayi++;}

}printf("(%d adettir):",ciftsayi);



    return 0;
}

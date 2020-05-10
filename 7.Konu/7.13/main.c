#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{   int a,b,c;
    setlocale(LC_ALL,"Turkish");
    printf("Üçgenin kenarlarýný giriniz:");
    scanf("%d%d%d",&a,&b,&c);
    if((a + b > c >abs(a - b) || a + c > b>abs(a - c )|| b + c > a>abs(c - b) ) && a > 0 && b > 0 && c > 0){
        printf("Bu bir üçgendir.");
        if(a==b==c){
            printf("Eþkenar üçgen");}
       else if(a==b||b==c||a==c){
            printf("Ýkiz kenar üçgen");
        }

            else{ printf("Bu üçgen bir çeþitkenar üçgendir");}

    }
    else{
        printf("Üçgen deðil");

        }



    return 0;
}

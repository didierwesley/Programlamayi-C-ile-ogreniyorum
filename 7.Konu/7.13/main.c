#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{   int a,b,c;
    setlocale(LC_ALL,"Turkish");
    printf("��genin kenarlar�n� giriniz:");
    scanf("%d%d%d",&a,&b,&c);
    if((a + b > c >abs(a - b) || a + c > b>abs(a - c )|| b + c > a>abs(c - b) ) && a > 0 && b > 0 && c > 0){
        printf("Bu bir ��gendir.");
        if(a==b==c){
            printf("E�kenar ��gen");}
       else if(a==b||b==c||a==c){
            printf("�kiz kenar ��gen");
        }

            else{ printf("Bu ��gen bir �e�itkenar ��gendir");}

    }
    else{
        printf("��gen de�il");

        }



    return 0;
}

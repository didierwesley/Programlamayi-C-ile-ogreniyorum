#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int a,b,c,e;
    int i;
printf("a^3+b^3+c^3=abc\nabcd=?\n");

for(i=100;i<1000;i++){

a=i/100;
b=(i%100)/10;
c=(i%10);


e=pow(a,3)+pow(b,3)+pow(c,3);
if(e==i){
    printf("%d ",i);}
    }

    return 0;
}

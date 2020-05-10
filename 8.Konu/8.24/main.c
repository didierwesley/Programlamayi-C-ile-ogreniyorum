#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int a,b,c,d,e;
    int i;
printf("a^a+b^b+c^c+d^d=abcd\nabcd=?\n");

for(i=1000;i<10000;i++){

a=i/1000;
b=(i%1000)/100;
c=(i%100)/10;
d=(i%10);

e=pow(a,a)+pow(b,b)+pow(c,c)+pow(d,d);
if(e==i){
    printf("sayý budur=%d",i);}
    }

    return 0;
}

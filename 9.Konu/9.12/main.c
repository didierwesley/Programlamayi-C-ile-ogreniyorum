#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int asal_mi(int ilk,int son){
 int bolen, i, d;

for(i=ilk;i<son;i++)
{
for (bolen = 2; bolen<i; bolen++)
{if(i%bolen==0)
{
d=0;
break;
}
else d=1;
}
if(d==1)printf("%d\n", i);
if(i==2){
    printf("%d\n", i );
}
        }

}
int main()
{
    int bas;
    setlocale(LC_ALL,"Turkish");

    int bas1,son1;
    printf("baþ=");
    scanf("%d",&bas1);
    printf("son=");
    scanf("%d",&son1);


 asal_mi(bas1,son1);

    return 0;
}

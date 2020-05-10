#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void mukemmelyaz(int bas1,int son1){

for(int i=bas1;i<son1;i++){//hangi aralýkta olduðu
    int top=0;
    for(int j=1;j<i;j++){//sayýlara böler
        if(i%j==0){
            top=top+j;
        }
    }
    if(top==i){
        printf("%d\n",i);
    }
}
}
int main()
{
    int bas,son;
    setlocale(LC_ALL,"Turkish");
    printf("bas=");
    scanf("%d",&bas);
    printf("son=");
    scanf("%d",&son);
    mukemmelyaz(bas,son);

    return 0;
}

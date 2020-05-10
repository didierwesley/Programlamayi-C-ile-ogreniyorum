#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void dikdortgenciz(int en,int boy){
    for(int i=0;i<en;i++){
        for(int j=0;j<boy;j++){
            printf("O");
        }
        printf("\n");
    }

}

int main()
{
    setlocale(LC_ALL,"Turkish");
int en1,boy1;
    printf("lütfen sýrayla en boy girin:\n");
    scanf("%d%d",&en1,&boy1);
    dikdortgenciz(en1,boy1);
    return 0;
}

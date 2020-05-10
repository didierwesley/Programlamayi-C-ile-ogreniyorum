#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
    printf("onluk  sekizlik  onaltýlýk\n");
    for(int i=0;i<16;i++){
        printf("%d\t%o\t%x\n",i,i,i);
    }
    return 0;
}

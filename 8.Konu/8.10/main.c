#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    float toplam1;
    int i,n,x;
    printf("x deðeri\n");
    scanf("%d",&x);
    printf("n deðeri\n");
    scanf("%d",&n);

    toplam1=1;
    for(i=1;i<=n;i++){
            toplam1+= pow(-x,i)/i;

    }
    printf("toplam:%f",toplam1);
    return 0;
}

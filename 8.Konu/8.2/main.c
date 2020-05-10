#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    float toplam1=0.0,i=1.0;
    int n;

    printf("n deðeri\n");
    scanf("%d",&n);



    for(;i<=n;i++){
            toplam1+=(i+1)/i;


    }
    printf("toplam:%f",toplam1);
    return 0;
}

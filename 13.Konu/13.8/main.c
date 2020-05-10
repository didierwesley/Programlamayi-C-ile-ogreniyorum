#include <stdio.h>
#include <stdlib.h>
int main() {
    char denklem[20];

    printf("dogrunun denklemini girin\n");
    scanf("%s",denklem);

    double m,n;
    char *mptr;
    char *nptr;
    int temsiliX,sonuc=0;

    m=strtod(denklem+2,&mptr);
    printf("%.lf\n",m);

    n=strtod(mptr+2, &nptr);
    printf("%.lf\n",n);

    printf("x degerini giriniz = ");
    scanf("%d",&temsiliX);

    sonuc=m*temsiliX+n;

    printf("\nsonuc = y = %d \n",sonuc);


    return 0;
}

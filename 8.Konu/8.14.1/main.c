#include<stdio.h>
#include<conio.h>
float toplam=0,alan;
int n,a,i;
int main() {
printf("bir sayi giriniz=");
scanf("%d",&n);
printf("karenin kenar uzunlugunu giriniz=");
scanf("%d",&a);
printf("_________________\n");
for(i=1; i<n+1; i++){
alan=a*a;
toplam=toplam+alan;
a=a/2;
}
toplam=toplam+a*a;
printf("toplam alan=%.f",toplam);
getch();
return 0;
}

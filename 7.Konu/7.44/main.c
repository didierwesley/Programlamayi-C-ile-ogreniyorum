#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL,"Turkish");
int sayi,a,b,c,yedek;
printf("3 basamakl� bir say� giriniz:");
scanf("%d",&sayi);
yedek=sayi;
c=sayi%10;
sayi/=10;
b=sayi%10;
sayi/=10;
a=sayi%10;
if(a>b){
yedek=a;
a=b;
b=yedek;
}
if(b>c){
yedek=b;
b=c;
c=yedek;
}
if(a>b){
yedek=a;
a=b;
b=yedek;
}if(a==0){
yedek=a;
a=b;
b=yedek;}
printf("Bu say�yla elde edilebilecek en k���k say�:%d%d%d",a,b,c);
return 0;
}


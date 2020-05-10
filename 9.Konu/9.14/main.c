#include <stdio.h>
#include <stdlib.h>

void obeb(int sayi1,int sayi2){
    int kucuk,sonuc=1;
if(sayi1>sayi2){
    kucuk=sayi2;
}
else{
    kucuk=sayi1;
}
for(int i=2;i<=kucuk;i++){
        if(sayi1%i==0&&sayi2%i==0){
            sonuc=i;

        }


}
printf("ebob=%d\n",sonuc);
int v=0;
v=(sayi1*sayi2)/sonuc;
printf("ekok=%d\n",v);


}



int main()
{int a,b;
    printf("ilk sayý");
    scanf("%d",&a);
    printf("ikinci sayý");
    scanf("%d",&b);

   obeb(a,b);



      return 0;
}

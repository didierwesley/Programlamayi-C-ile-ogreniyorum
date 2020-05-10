#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int enyakinAsal(int sayi,char a){
int i;

if(a=='b'||a=='B')
{
i=sayi+1;
 //büyük k=bölen i=en yakýn sayý
for(int k=2; k<i; k++)

{ if(i%k==0){
k=2;
i++; }
}
if(i<=1&&i>0){
    printf("%d sayisina en yakin asal sayi %d dir",sayi,i+1);
}
else if(i<=0){
    printf("%d sayisina en yakin asal sayi 2 dir",sayi);
}
else
printf("%d sayisina en yakin asal sayi %d dir",sayi,i);



}
if(a=='k'||a=='K'){
i=sayi-1;
 //küçük
for(int k=2; k<i; k++)

{ if(i%k==0)
{
k=2;
i--; }
}
if(i<=1){
        printf("Yok");}
        else

printf("%d sayisina en yakin asal sayi %d dir",sayi,i);





}



return 0;
 }


int main()
{
setlocale(LC_ALL,"Turkish");
int sayi1;
char a1;
printf("Kendinden büyük asalý seçiceksen (b/B),kendinden küçük asalý seçiceksen(k/K)\n");
scanf(" %c",&a1);
printf("bir sayi giriniz:\n");
scanf("%d",&sayi1);
enyakinAsal(sayi1,a1);
return 0;
}

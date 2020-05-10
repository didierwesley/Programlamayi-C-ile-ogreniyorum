#include<stdio.h>
#include<math.h>

void cevir(int *a,int *a1,int *a2,int *a3,char b,int c);

int main()
{

int sayi,sayi1,sayi2,sayi3,tur;
char yon;

printf("\n4 adet tam sayi giriniz: ");
scanf("%d %d %d %d",&sayi,&sayi1,&sayi2,&sayi3);

printf("\ncevirmee yonu(saat yonu icin D,tersi icin T):");
scanf("%s",&yon);

printf("\ngirilen yonde kac kere cevirilecek");
scanf("%d",&tur);

printf("\nsayilarin cevirilmeden onceki halleri:\n");
printf("a\tb\tc\td\n%d\t%d\t%d\t%d\n",sayi,sayi1,sayi2,sayi3);


cevir(&sayi,&sayi1,&sayi2,&sayi3,yon,&tur);

printf("\nsayilarin cevirilmeden sonraki halleri:\n");
printf("a\tb\tc\td\n%d\t%d\t%d\t%d\n",sayi,sayi1,sayi2,sayi3);

return 0;
}

void cevir(int *a,int *a1,int *a2,int *a3,char b,int c)
{
int i,j,f,dizi[4],temp;

dizi[0]=*a;
dizi[1]=*a1;
dizi[2]=*a2;
dizi[3]=*a3;

c=c%4;

if(b=='d' || b=='D'){

for(j=0;j<c;j++){

for(i=0;i<3;i++){
f=(i+1)%4;
temp=dizi[i];
dizi[i]=dizi[f];
dizi[f]=temp;

}
}
}

if(b=='t' || b=='T'){

for(j=0;j<c;j++){

for(i=0;i<3;i++){

if(i==0){
f==3;
}
if(i!=0){
f=(i-1)%4;
}

temp=dizi[i];
dizi[i]=dizi[f];
dizi[f]=temp;

}
}
}

*a=dizi[0];
*a1=dizi[1];
*a2=dizi[2];
*a3=dizi[3];

}

#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
int i;
char s[100];
char ts[100]={'\0'};
int uzunluk=0;
int karsilastirma;
printf("Dizgi giriniz: ");
fgets(s, 100, stdin);
uzunluk=strlen(s)-1;
for(i=uzunluk-1;i>=0;i--){
    ts[uzunluk-i-1]=s[i];
}
//printf("%s",ts);
for(i=uzunluk-1;i>=0;i--){
if(ts[i]==s[i])
    karsilastirma=1;
else
    karsilastirma=0;
}
if(karsilastirma){
    printf("Palindromdur");

}
else printf("Degildir...");




    return 0;
}

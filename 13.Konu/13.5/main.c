#include <stdio.h>

#include <string.h>

int main()
{
      char kelime[15];
      int uzunluk,i,kalinSesli=0,inceSesli=0;

      printf("Bir kelime girin: ");
      gets(kelime);

      uzunluk=strlen(kelime);

      for(i=0;i<uzunluk;i++){
       if(kelime[i]=='a'||kelime[i]=='o'||kelime[i]=='u'||kelime[i]=='ý'){
        kalinSesli+=1;
    }
       if(kelime[i]=='e'||kelime[i]=='i'||kelime[i]=='ü'||kelime[i]=='ö'){
        inceSesli+=1;
    }

   }

   if(kalinSesli==0||inceSesli==0){
    printf("%s Kelimesi Buyuk Unlu Uyumuna Uyuyor.",kelime);
   }
   else{
    printf("%s Kelimesi Buyuk Unlu Uyumuna Uymuyor.",kelime);
   }

      getch();
}


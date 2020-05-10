
#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

int main()
{
    char s[100];
    printf("Dizgiyi giriniz\n");
  fgets(s, 100, stdin);
    for(int i=0;s[i]!='\0';i++){
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
            else if(islower(s[i]))
            s[i]=toupper(s[i]);

    }
    printf("Donusturulmus hali:%s",s);
    return 0;
}

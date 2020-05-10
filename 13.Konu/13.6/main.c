#include <stdio.h>
#include <ctype.h>

int main() {
int i;
char s[100];
printf("Dizgi giriniz: ");
fgets(s, 100, stdin);

for (i=0;s[i] != '\0' ;i++ ){
    if(isalpha(s[i])){
        if(isupper(s[i]))
            s[i]=tolower(s[i]);
        }
    }

   for (i=0; s[i] != '\0'; i++) {
        if(isspace(s[i]))
            s[i+1]=toupper(s[i+1]);
    }
    s[0]=toupper(s[0]);
    printf("%s",s);

    return 0;
}

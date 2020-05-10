#include <stdio.h>
#include <stdlib.h>
void bosluk(){
printf("\n");
printf("\n");
}
void ikizkenar(){
printf("     /\\ \n");
printf("    /  \\ \n");
printf("   /    \\ \n");
printf("  /      \\ \n");
printf(" /        \\ \n");
}
void taban(){
printf(" -----------\n");
}
void cati(){
ikizkenar();
taban();
}
void govde(){
printf(" -----------\n");
printf(" |         | \n");
printf(" |         | \n");
printf(" |         | \n");
printf(" |         | \n");
printf(" -----------\n");

}

int main()
{
    cati();
    govde();
    bosluk();
    cati();
    govde();

    printf("Hello world!\n");
    return 0;
}

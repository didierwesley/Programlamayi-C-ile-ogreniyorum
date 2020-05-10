#include <stdio.h>
#include <stdlib.h>

void cizTablo(char[][8]);
void yapTablo(char[][8], int, int);

int main()
{
    int x, y;
    char tablo[8][8];

 while(x<0 || x>7 || y<0 || y>7){
        printf("Atin konumu : ");
        scanf("%d %d", &x, &y);
 }

    printf("------------------\n");

    yapTablo(tablo, x, y);
    cizTablo(tablo);

    return 0;
}

void yapTablo(char tablo[][8], int x, int y) {
    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            if(i==x && j==y) {
                tablo[i][j]='A';
            } else {
                tablo[i][j]='-';
            }
            if(i==x-2 || i==x+2) {
                if(j==y-1 || j==y+1) {
                    tablo[i][j]='*';
                }
            } else if(i==x-1 || i==x+1) {
                if(j==y-2 || j==y+2) {
                    tablo[i][j]='*';
                }
            }
        }
    }
}

void cizTablo(char tablo[][8]) {
    printf(" ");
    for(int i=0; i<8; i++) {
        printf(" %d", i);
    }
    printf("\n");
    for(int i=0; i<8; i++) {
        printf("%d ", i);
        for(int j=0; j<8; j++) {
            printf("%c ", tablo[i][j]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void cizTablo(char[][8]);
void yapTablo(char[][8]);

int main()
{


    char tablo[8][8];
  printf("------------------\n");

    yapTablo(tablo);
    cizTablo(tablo);

    return 0;
}

void yapTablo(char tablo[][8]) {


     int x;
     int y;
     int dizi1[9];
     int dizi2[9];
 srand(time(NULL));
 for(int k=0; k<9; k++) {
x=rand()%8;
dizi1[k]=x;
y=rand()%8;
dizi2[k]=y;
}

    for(int i=0; i<8; i++) {

        for(int j=0; j<8; j++) {

            if(i==x && j==y) {
                tablo[i][j]='*';
            } else {
                tablo[i][j]='-';
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

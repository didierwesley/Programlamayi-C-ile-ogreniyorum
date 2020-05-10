#include <stdio.h>
#include <stdlib.h>

int main()
{
    char konumlar[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            konumlar[i][j]='-';
        }
    }
    int atX=6;
    int atY=6;
    printf("At konumu: %d, %d\n",atX,atY);
    printf("  0 1 2 3 4 5 6 7\n");
    konumlar[atX][atY]='A';




    if(atX>=2){
        if(atY>=1){
            konumlar[atX-2][atY-1]='*';
        }
        if(atY<=6){
            konumlar[atX-2][atY+1]='*';
        }
    }
    if(atY>=2){
        if(atX>=1){
            konumlar[atX-1][atY-2]='*';
        }
        if(atX<=6){
            konumlar[atX+1][atY-2]='*';
        }
    }





    if(atX<=5){
        if(atY>=1){
            konumlar[atX+2][atY-1]='*';
        }
        if(atY<=6){
            konumlar[atX+2][atY+1]='*';
        }
    }
    if(atY<=5){
        if(atX>=1){
            konumlar[atX-1][atY+2]='*';
        }
        if(atX<=6){
            konumlar[atX+1][atY+2]='*';
        }
    }








for(int i=0;i<8;i++){
        printf("%d ",i);
        for(int j=0;j<8;j++){
            printf("%c ",konumlar[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int noktabul(int x1,int y1,int x2,int y2){
int maxx=0,minx=0,maxy=0,miny=0;
if(x1>x2){
    maxx=x1;
    minx=x2;
}
if(x1<x2){
    maxx=x2;
    minx=x1;
}
printf("%d\n",rand()%(maxx-minx+1)+minx );
if(y1>y2){
    maxy=y1;
    miny=y2;
}
if(y1<y2){
    maxy=y2;
    miny=y1;
}
printf("%d\n",rand()%(maxy-miny+1)+miny );

}



int main()
{int x11,y11,x22,y22;
    noktabul(-3,3,2,-2);
    return 0;
}

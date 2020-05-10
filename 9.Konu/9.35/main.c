#include <stdio.h>
#include <stdlib.h>
float alanbul(float a,float b,float c,float d){
    float sonuc;
    if(a<0){
        a=fabs(a);
    }
    if(b<0){
        b=fabs(b);
    }
    if(c<0){
        c=fabs(c);
    }
    if(d<0){
        d=fabs(d);
    }

    sonuc=(a+b)*(c+d);
    return sonuc;


}
int main()
{
    int a1,b1,c1,d1;
    int x;
    x=alanbul(-2,5,2,-2);
    printf("%d\n",x);
    return 0;
}

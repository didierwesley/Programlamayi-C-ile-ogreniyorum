#include <stdio.h>
#include <stdlib.h>
int buyuktarih(int gun1,int ay1,int yil1,int gun2,int ay2,int yil2){
if(yil2>yil1){
    printf("%d/%d/%d\n",gun2,ay2,yil2);
}
if(yil2<yil1){
    printf("%d/%d/%d\n",gun1,ay1,yil1);
}
if(yil1==yil2){
        if(ay2>ay1){
             printf("%d/%d/%d\n",gun2,ay2,yil2);
        }
        if(ay1>ay2){
             printf("%d/%d/%d\n",gun1,ay1,yil1);
        }



    if(ay1==ay2){
        if(gun2>gun1){
            printf("%d/%d/%d\n",gun2,ay2,yil2);


        }
        if(gun1>gun2){
            printf("%d/%d/%d\n",gun1,ay1,yil1);
        }
    }

}


}
int main()
{
   int gun1,ay1,yil1,gun2,ay2,yil2;
   buyuktarih(12,12,2004,22,12,2004);
   buyuktarih(20,01,2005,22,12,2004);
    return 0;
}

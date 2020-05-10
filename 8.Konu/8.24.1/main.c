#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>
int main(){
int sayac=1000, a, b, c, d, adegeri=0, bdegeri=0, cdegeri=0, ddegeri=0,kalan,toplam=0;

        while(sayac<=9999){

                kalan=sayac%1000;
                a=(sayac-kalan)/1000;
                sayac=kalan;
                kalan=sayac%100;
                b=(sayac-kalan)/100;
                sayac=kalan;
                kalan=sayac%10;
                c=(sayac-kalan)/10;
                d=kalan;


                for(int binler=1;binler<=1;binler++){

                        if(a==1){
                        adegeri=a*a;
                        }
                        else if(a==2){
                        adegeri=a*a;
                        }
                        else if(a==3){
                        adegeri=a*a*a;
                        }
                        else if(a==4){
                        adegeri=a*a*a*a;
                        }
                        else if(a==5){
                        adegeri=a*a*a*a*a;
                        }
                        else if(a==6){
                        adegeri=a*a*a*a*a*a;
                        }
                        else if(a==7){
                        adegeri=a*a*a*a*a*a*a;
                        }
                        else if(a==8){
                        adegeri=a*a*a*a*a*a*a*a;
                        }
                        else if(a==9){
                        adegeri=a*a*a*a*a*a*a*a*a;
                        }
                }

                for(int yüzler=1;yüzler<=1;yüzler++){

                        if(b==1){
                        bdegeri=b*b;
                        }
                        else if(b==2){
                        bdegeri=b*b;
                        }
                        else if(b==3){
                        bdegeri=b*b*b;
                        }
                        else if(b==4){
                        bdegeri=b*b*b*b;
                        }
                        else if(b==5){
                        bdegeri=b*b*b*b*b;
                        }
                        else if(b==6){
                        bdegeri=b*b*b*b*b*b;
                        }
                        else if(b==7){
                        bdegeri=b*b*b*b*b*b*b;
                        }
                        else if(b==8){
                        bdegeri=b*b*b*b*b*b*b*b;
                        }
                        else if(b==9){
                        bdegeri=b*b*b*b*b*b*b*b*b;
                        }
                }

                for(int onlar=1;onlar<=1;onlar++){

                        if(c==1){
                        cdegeri=c*c;
                        }
                        else if(c==2){
                        cdegeri=c*c;
                        }
                        else if(c==3){
                        cdegeri=c*c*c;
                        }
                        else if(c==4){
                        cdegeri=c*c*c*c;
                        }
                        else if(c==5){
                        cdegeri=c*c*c*c*c;
                        }
                        else if(c==6){
                        cdegeri=c*c*c*c*c*c;
                        }
                        else if(c==7){
                        cdegeri=c*c*c*c*c*c*c;
                        }
                        else if(c==8){
                        cdegeri=c*c*c*c*c*c*c*c;
                        }
                        else if(c==9){
                        cdegeri=c*c*c*c*c*c*c*c*c;
                        }
                }

                for(int birler=1;birler<=1;birler++){

                        if(d==1){
                        ddegeri=d*d;
                        }
                        else if(d==2){
                        ddegeri=d*d;
                        }
                        else if(d==3){
                        ddegeri=d*d*d;
                        }
                        else if(d==4){
                        ddegeri=d*d*d*d;
                        }
                        else if(d==5){
                        ddegeri=d*d*d*d*d;
                        }
                        else if(d==6){
                        ddegeri=d*d*d*d*d*d;
                        }
                        else if(d==7){
                        ddegeri=d*d*d*d*d*d*d;
                        }
                        else if(d==8){
                        degeri=d*d*d*d*d*d*d*d;
                        }
                        else if(d==9){
                        ddegeri=d*d*d*d*d*d*d*d*d;
                        }
                }

                toplam=adegeri+bdegeri+cdegeri+ddegeri;
                return 0;
                }

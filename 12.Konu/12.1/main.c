#include <stdio.h>
#include <stdlib.h>
void sagdankirp(double *,int );
int main()
{

    double a=3.14,b=4.56,c=2.1;
    double dizi[3]={a,b,c};
    sagdankirp(dizi,3);
     printf("Sirali:\n");
    for(int i=0;i<3;i++)
    printf("%f ",dizi[i]);

    return 0;
}
void sagdankirp(double *dizip,int n){

int i,j,temp;

for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            if(dizip[j-1]>dizip[j]){
                int temp=dizip[j];
                dizip[j]=dizip[j-1];
                dizip[j-1]=temp;
            }
        }
    }
}

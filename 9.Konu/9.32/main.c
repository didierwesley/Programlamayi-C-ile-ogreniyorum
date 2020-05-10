#include <stdio.h>
#include <stdlib.h>
#include<math.h>
  float faktoriyel(int n)
  {
        float f; int i;
        f=1;
        for(i=1;i<=n;i++)
        f=f*i;
        return f;
  }
  float permutasyon(int n,int r){
      float per;
      if(n>r){


       per = faktoriyel(n)/ faktoriyel(n-r);
    printf("Permutasyon sonucu : %f ",per );
  }
 else{
    printf("Yanlýþ girdiniz...Lütfen tekrar giriniz...");
 }

  }
int main()
{
int n1,r1;

    printf("n degerini giriniz : ");
    scanf("%d",&n1);
    printf("r degerini giriniz : ");
    scanf("%d",&r1);
    permutasyon(n1,r1);



    return 0;
}

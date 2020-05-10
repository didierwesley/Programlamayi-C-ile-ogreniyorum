#include <stdio.h>
#include <stdlib.h>
float faktoriyel(int n)
  {
        float f; int i;
        f=1;
        for(i=1;i<=n;i++)
        f=f*i;
        return f;
  }
float kombinasyon(float n,float r){
float sonuc=0;
sonuc = faktoriyel(n)/(faktoriyel(n-r)*faktoriyel(r));
printf("%.1f",sonuc);
return sonuc;
}
int main()
{
    int n1,r1;
    printf("n ve r degeri girin\n");
    scanf("%d%d",&n1,&r1);

    kombinasyon(n1,r1);
    return 0;
}

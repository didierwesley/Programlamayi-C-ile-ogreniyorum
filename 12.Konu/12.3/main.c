#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("Sayiyi giriniz\n");
    scanf("%d",&sayi);
    printf("%d sayisinin birler basamagi : %d\n",sayi,sayi%10);
    printf("%d sayisinin onlar basamagi : %d\n",sayi,(sayi/10)%10);
    printf("%d sayisinin yuzler basamagi : %d\n",sayi,(sayi/100)%10);
    printf("%d sayisinin binler basamagi : %d\n",sayi,sayi/1000);
    return 0;
}

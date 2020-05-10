#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
void ara(int fmatris[][4],int boy,int bul)
{
    int i,j;
    for (i = 0 ; i < boy ; i++)
    {
        for (j = 0 ; j < boy ; j++)
        {
            if (fmatris[i][j]==bul)
            {
                printf("%d sayisi matriste %d .satir %d. sutundadir",bul,i,j);
                break;
            }
        }
    }
}
int main()
{
    int matris[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int i, aranan;
    printf("aramak istediginiz sayiyi giriniz:");
    scanf("%d", &aranan);
    ara(matris,4,aranan);
    return 0;
}

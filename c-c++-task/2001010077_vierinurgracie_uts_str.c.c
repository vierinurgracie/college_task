#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a[4][4];
    int z[4][4];
    int m[4][4];
    int p = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int b = 0; b < 4; b++)
        {
            printf("masukkan elemen array a");scanf("%d",&a[i][b]);
        }
        
    }
printf("isi dari array a\n");
    for (int i = 0; i < 4; i++)
    {
        for (int b = 0; b < 4; b++)
        {
            printf("%d\t",a[i][b]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int b = 0; b < 4; b++)
        {
           z[i][b]= p;
           p++;
        }
        
    }
printf("isi array b\n");

    for (int i = 0; i < 4; i++)
    {
        for (int b = 0; b < 4; b++)
        {
            printf("%d\t",z[i][b]);
        }
        printf("\n");
    }
printf("hasil pengurangan array 1 dengan array 2\n");
    for (int i = 0; i < 4; i++)
    {
        for (int b = 0; b < 4; b++)
        {
           m[i][b] = z[i][b]-a[i][b];  
        }
        
    }

     for (int i = 0; i < 4; i++)
    {
        for (int b = 0; b < 4; b++)
        {
            printf("%d\t",m[i][b]);
        }
        printf("\n");
    }

    return 0;
}
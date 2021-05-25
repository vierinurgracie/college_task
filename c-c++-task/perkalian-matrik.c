#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, row , col;
    int row1 , col1;
    int hasil[4][4];
    int j = 0;

    printf("masukkan panjang baris "); scanf("%d",&row);
    printf("masukkan panjang kolom "); scanf("%d",&col);
    printf("masukkan panjang baris "); scanf("%d",&row1);
    printf("masukkan panjang kolom "); scanf("%d",&col1);

    int **larik3 = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        larik3[i]= (int *)malloc(col * sizeof(int));
    }
    
    int **larik4 = (int **)malloc(row1 * sizeof(int *));
    for (int i = 0; i < row1; i++)
    {
        larik4[i]= (int *)malloc(col1 * sizeof(int));
    }

    if (col == row1)
    {
        for (int i = 0; i < row; i++)
        {
            for (int a = 0; a < col; a++)
            {
                printf("masukkan nilai ke matrik3 ");scanf("%d",&larik3[i][a]);
            }
            
        }
        for (int i = 0; i < row1; i++)
        {
            for (int a = 0; a < col1; a++)
            {
                printf("masukkan nilai ke matrik4 ");scanf("%d",&larik4[i][a]);
            }
            
        }
        for (int i = 0; i < row; i++)
        {
            for (int a = 0; a < col; a++)
            {
                printf("%d\t",larik3[i][a]);
            }
            printf("\n");
        }
        printf("\n");
        for (int i = 0; i < row1; i++)
        {
            for (int a = 0; a < col1; a++)
            {
                printf("%d\t",larik4[i][a]);
            }
            printf("\n");
        }
        
        for (int i = 0; i < row; i++)
        {
            for (int a = 0; a < col1; a++)
            {
                for (int b = 0; b < row1; b++)
                {
                    j = j + larik3[i][b] * larik4 [b][a];
                }
                hasil[i][a] = j;
                j = 0;
            }
            
        }
        
    
        printf("perkalian matrik\n");
        for (int i = 0; i < 2; i++)
        {
            for (int a = 0; a < 2; a++)
            {
                printf("%d\t",hasil[i][a]);
            }
            printf("\n");
        }
        

    }
    else
    {
        printf("matrik tidak dapa dikalikan");
    }
    



    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int data_mahasiswa(char nim[],char nama[], char jurusan[]){
    FILE *data;
    data = fopen("file.txt","a");

    fprintf(data,"=== Program input data mahasiswa === \n");
    fprintf(data,"nim       : %s",nim);fprintf(data,"\n");
    fprintf(data,"nama      : %s",nama);fprintf(data,"\n");
    fprintf(data,"jurusan   : %s",jurusan);fprintf(data,"\n");
   
    fclose(data);
    return 0;
}

int main(){
   char nama[100];
   char nim[50];
   char jurusan[50];
   char pilih[10];
    do{    
    printf("masukkan nim anda ");fgets(nim,50,stdin);
    printf("masukkan nama anda ");fgets(nama,100,stdin);
    printf("masukkan jurusan anda ");fgets(jurusan,50,stdin);
    data_mahasiswa(nim,nama,jurusan);  
    printf("apakah mau nginput data lagi? [Y/N] ");
    fgets(pilih,sizeof(pilih),stdin);
    }
    while (pilih == "y"|| pilih == "Y");
    {
        printf("terimakasih");
    }
   return 0; 
}

// int main(){
//     char nama[30];
//     printf("masukkan nama kampus ");fgets(nama,sizeof(nama),stdin);

//     FILE*data;
//     data = fopen("file.txt","a");
    
//     fprintf(data, "%s",nama);
//     fclose(data);
//     return 0;
// }


// void main(){
//     char open[500];
//     FILE *data;

//     if ((data = fopen("file.txt","r")) == NULL)
//     {
//         printf("error: file tidak ada");
//         exit(1);
//     }
    
//     while (fgets(open,sizeof(open),data))
//     {
//         printf("%s",open);
//     }
    
//     fclose(data);
// }


#include <stdio.h>
#include <curses.h>
#include <math.h>  
#include <string.h>
#include <stdlib.h>

// int main(){
//   char kalimat[100];
//   int panjang_kalimat;
//   printf("masukkan kalimat ");fgets(kalimat,sizeof(kalimat),stdin);
//   panjang_kalimat = strlen(kalimat);
//   printf("panjang kalimat adalah %d huruf",panjang_kalimat);
//   return 0;
// }

// void data_mahasiswa(int inputan){
//   if (inputan == inputan)
//   {
//     for (int i = 1; i <= inputan; i++)
//     {
//       int nilai[inputan];
//       printf("masukkan nilai mahasiswa ke %d ",i);scanf("%i",&nilai[i]);
//       printf("data %d",i);
//       printf("\n");
//       printf("nilai; %d",nilai[i]);
//       printf("\n");

//     }
    
//   }
  
// }
// int main(){
//  int jumlah_data;
//  printf("masukkan jumlah data ");scanf("%d",&jumlah_data);
//  data_mahasiswa(jumlah_data); 
//  return 0;
// }

// int main() {
//    int matrik [2][2];
//    int matrik1 [2][2];
   
//    for (int i = 0; i <2; i++)
//    {
//      for (int j = 0; j < 2; j++)
//      {
//        printf("masukkan nilai ");scanf("%d",&matrik[i][j]);
       
//      }
    
//    }
//    for (int i = 0; i < 2; i++)
//    {
//      for (int j = 0; j < 2; j++)
//      {
//        printf("%d \t",matrik[i][j]);
//      }
//      printf("\n");
//    }
//    for (int a = 0; a <2; a++)
//    {
//      for (int b = 0; b < 2; b++)
//      {
//        printf("masukkan nilai ");scanf("%d",&matrik1[a][b]);
       
//      }
    
//    }
//    for (int a = 0; a < 2; a++)
//    {
//      for (int b = 0; b < 2; b++)
//      {
//        printf("%d \t",matrik1[a][b]);
//      }
//      printf("\n");
//    }
//    printf("\n");
//    for (int c = 0; c < 2; c++)
//    {
//      for (int d = 0; d < 2; d++)
//      {
//        printf("hasil penjumlahan matrik adalah %d \t",matrik[c][d]+matrik1[c][d]);
//      }
//      printf("\n");
//    }
   
//   return 0; 
// }

// int main(){
//   int matrik1[2][2];
//   int matrik2[2][2];
//   int tranpose[2][2];
//   int perkalian_matrik[2][2];
//   for (int a = 0; a < 2; a++)
//   {
//     for (int b = 0; b < 2; b++)
//     {
//       printf("masukkan elemen pada matrik baris %d , kolom %d ",a,b);scanf("%d",&matrik1[a][b]);
//     }
    
//   }
//   for (int a = 0; a < 2; a++)
//   {
//     for (int b = 0; b < 2; b++)
//     {
//       printf("%d \t",matrik1[a][b]);
//     }
//     printf("\n");
//   }

//   for (int c = 0; c < 2; c++)
//   {
//     for (int d = 0; d < 2; d++)
//     {
//       printf("masukkan elemen pada matrik baris %d , kolom %d ",c,d);scanf("%d",&matrik2[c][d]);
//     }
    
//   }
//   for (int c = 0; c < 2; c++)
//   {
//     for (int d = 0; d < 2; d++)
//     {
//       printf("%d \t",matrik2[c][d]);
//     }
//     printf("\n");
//   }
  
//   printf("tranpose matrik \n");
//   for (int e = 0; e < 2; e++)
//   {
//     for (int f = 0; f < 2; f++)
//     {
//       tranpose[f][e]= matrik2[e][f];
//     }
    
//   }
  
//   for (int e = 0; e < 2; e++)
//   {
//     for (int f = 0; f < 2; f++)
//     {
//       printf("%d \t",tranpose[e][f]);
//     }
//     printf("\n");
//   }
//   printf("hasi perkalian matriks \n");
//      perkalian_matrik[0][0]=(matrik1[0][0]*tranpose[0][0]) + (matrik1[0][1]*tranpose[0][1]);
//      perkalian_matrik[0][1]=(matrik1[0][0]*tranpose[1][0]) + (matrik1[0][1]*tranpose[1][1]);
//      perkalian_matrik[1][0]=(matrik1[1][0]*tranpose[0][0]) + (matrik1[1][1]*tranpose[0][1]);
//      perkalian_matrik[1][1]=(matrik1[1][0]*tranpose[1][0]) + (matrik1[1][1]*tranpose[1][1]);
//   for (int i = 0; i < 2; i++)
//   {
//     for (int j = 0; j < 2; j++)
//     {
//       printf("%d\t",perkalian_matrik[i][j]);
//     }
//     printf("\n");
//   }
  
//  return 0; 
// }

//UAS
// int main(){
//   int main(){
//   int a[]={1,2,2,4,5};
//   int b[]={8,7,6,8,9};
//   int c[10];
//   int d = 0;
//   int e;
//   printf("gabungan larik A dengan larik B \n");
//   for (int i = 0; i < 5; i++)
//   {
//     c[d]=a[i];
//     d++;
//   }
//     for (int i = 0; i < 5; i++)
//   {
//     c[d]=b[i];
//     d++;
//   }
//   for (int i = 0; i < 10; i++)
//   {
//     printf("%d",c[i]);
//   }
//   printf("\n");
//   for (int i = 0; i < 10; i++)
//   {
//     for (int j = i+1; j < 10; j++)
//     {
//       if (c[i]>c[j])
//       {
//         e=c[j];
//         c[j]=c[i];
//         c[i]=e;
//       }
      
//     }
    
//   }
//   printf("hasil urutan \n");
//   for (int i = 0; i < 10; i++)
//   {
//     printf("%d",c[i]);
//   }
//   printf("\nmenghilangkan angka yang sama\n");
//   for (int i = 0; i < 10; i++)
//   {
//     if (c[i]!=c[i+1])
//     { 
//       printf("%d",c[i]);
//     }
   
//   }
  
//   return 0;
// }



// int main(){
//   int tgl_lahir;
//   int harga_barang;
//   int total_bayar;
//   int hemat_uang;
//   printf("masukkan tangga lahir anda ");scanf("%d",&tgl_lahir);
//   printf("masukkan harga barang ");scanf("%d",&harga_barang);
//   printf("\n\n");
//   if (tgl_lahir %2==0)
//   {
//     printf("anda mendapatkan diskon sebesar 12 persen\n");
//     total_bayar = harga_barang - ((harga_barang*12) / 100);
//     printf("total bayar anda sebesar %d rupiah\n",total_bayar);
//     hemat_uang = harga_barang - total_bayar ;
//     printf("anda lebih hemat %d rupiah\n",hemat_uang);
//   }
//   else
//   {
//     printf("anda mendapatkan diskon sebesar 10 persen\n");
//     total_bayar = harga_barang -((harga_barang*10) / 100);
//     printf("total bayar anda sebesar %d rupiah\n",total_bayar);
//     hemat_uang = harga_barang- total_bayar ;
//     printf("anda lebih hemat %d rupiah\n",hemat_uang); 
//   }
//   return 0;
// }

// int main(){
//   int a[4][4];
//   int x;
//   printf("masukkan angka x untuk mengubah nilai pada matrik yang kolom dan baris nya sama\n");
//   scanf("%d",&x);
//   for (int i = 0; i < 4; i++)
//   {
//     for (int b = 0; b < 4; b++)
//     {
//       scanf("%d",&a[i][b]);
//     }
    
//   }
//   for (int i = 0; i < 4; i++)
//   {
//     for (int b = 0; b < 4; b++)
//     {
//       printf("%d\t",a[i][b]);
//     }
//     printf("\n");
//   }
//   for (int i = 0; i < 4; i++)
//   {
//     for (int m = 0; m < 4; m++)
//     {
//       a[i][m]=x;
//       i++;
//     }
    
//   }
//   printf("\n");
//   for (int i = 0; i < 4; i++)
//   {
//     for (int b = 0; b < 4; b++)
//     {
//       printf("%d\t",a[i][b]);
//     }
//     printf("\n");
//   }
  
//  return 0; 
// }

// int luas_segitiga(int alas, int tinggi){
//     int luas = (alas * tinggi)/2;
//     printf("luas segitiga adalah %d",luas);
//     return luas;
// }

// int main(){
//     int alas;
//     int tinggi;
//     printf("masukkan tinggi segitiga ");scanf("%d",&tinggi);
//     printf("masukkan alas segitiga ");scanf("%d",&alas);
//     luas_segitiga(alas,tinggi);

//     return 0;
// }

// void pilihan(){
//     printf("1 kubus\n2 balok\n3 tabung");
//     printf("\n");
// }
// void rumus(int pilih){
//     printf("pilih rumus luas ");scanf("%d",&pilih);
//     if (pilih == 1)
//     {
//         int luas;
//         int sisi;
//         printf("luas permukaan kubus \n");
//         printf("masukkan panjang sisi kubus ");scanf("%d",&sisi);
//         luas = 6 * sisi*sisi;
//         printf("\n");
//         printf("hasil luas permukaan kubus = %d",luas);
        
//     }
    
// }

// int main(){
//     int pilih;
//     pilihan();
//     rumus(pilih);

//     return 0;
// }

// int main(){
//     for (int i = 0; i < 4; i++)
//     {
//         for (int a = 0; a < i; a++)
//         {
//             printf("$");

//         }
//         printf("\n");
//     }
    
// }

// int main(){
//    int a[100];
//    int i;

//     for (int i = 0; i < 10; i++)
//     {
//         if (i<2)
//         {
//             a[i]=i;
//         }
//         else
//         {
//             a[i]= a[i-1] + a[1-2];
//         }
//         printf("%d",a[i]);
        

//     }
    
// }

struct node
{
    int nilai, priority;
    struct node *next;
}*head, *tail;

struct node *new(int x, int y){
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> nilai = x;
    new_node -> priority = y;
    new_node -> next = head;
    head = new_node;
}

struct node *newbelakang(int x, int y){
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> nilai = x;
    new_node -> priority = y;
    if (head == NULL)
    {
        head = tail = new_node;
    }
    else
    {
        tail-> next = new_node;
        tail = new_node;
    }
    tail -> next = NULL;
}

void tampilkan(){
    struct node *l;
    if (head == NULL)
    {
        printf("linked list kosong\n");
        return;
    }
    l = head;
    while (l != NULL)
    {
        printf("%d.%d\n",l->nilai, l->priority);
        l = l->next;
    }
}

int main(){
    int x,y,pilih;
    // struct node *head = NULL;
    
    while (1)
    {
        printf("1.tampilkan.\n");
        printf("2.tambahkan node.\n");
        printf("3.exit/keluar.\n");
        printf("pilih opsi ");
        scanf("%d",&pilih);

    switch (pilih)
    {
    case 1:
        tampilkan(head);
        break;
    case 2:
        printf("masukkan nilai ");scanf("%d",&x);
        printf("masukkan priority ");scanf("%d",&y);
        if (y == 1)
        {
            new(x,y);
        }
        else if (y == 0)
        {
            newbelakang(x,y);
        }
        
        
        break;
    case 3:
        exit(1);
        break;

    default:
        break;
    }
    }
}
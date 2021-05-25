// #include <stdio.h>
// #include <stdlib.h>

// void swap (int* a, int* b){
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// int partisi (int arr[],int low, int high){
//     int pivot = arr[high];
//     int i = (low - 1);

//     for (int j = low; j <= high- 1; j++)
//     {
//         if(arr[j] < pivot){
//             i++;
//             swap(&arr[i],&arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }

// void quicksort(int arr[],int low, int high){
//     if (low < high)
//     {
//         int pi = partisi(arr, low, high);
//         quicksort(arr, low, pi - 1);
//         quicksort(arr, pi + 1, high);
//     }
    
// }

// void printarray(int arr[], int size){
//     int i;
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d",arr[i]);
//         printf("\n");
//     }
// }
    

// int main(){
//      int arr[]={10,7,8,9,1,0,-1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quicksort(arr,0,n-1);
//     printf("array setelah diurutkan : ");
//     printarray(arr,n);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void quicksort (int a[], int lo, int hi){
	int i=lo, j=hi, tmp;
	int pivot =a[(lo+hi)/2];
	
	do{
		while (a[i]>pivot)i++;
		while (a[j]<pivot) j--;
		if (i<=j){
			tmp=a[i]; a[i]=a[j];a[j]=tmp;
			i++;
			j--;
		}
	}
	while (i<=j);
	if (lo<j){
		quicksort (a, lo, j);
	} 
	if (i<hi){
		quicksort (a,i,hi);
	} 
}
int main (){
	int arr[100];
	int banyak,i;
	printf ("input banyak data :");
	scanf ("%d", &banyak);
	for(i=0;i<banyak;i++){
		printf("Masukkan angka ke-%d :",i+1);
		scanf("%d", &arr[i]);
	}
	printf ("Hasil sebelum diurutkan : \n");
	for (i=0;i<banyak;i++){
		printf ("%d ", arr[i]);
	}
	printf ("\n");
	quicksort (arr,0,banyak-1);
	
	printf ("\nHasil pengurutan secara Descending: \n");
	for (i=0; i<banyak; i++){
		printf ("%d ", arr[i]);
	}
	return 0;
}
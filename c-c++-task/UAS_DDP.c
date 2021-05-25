#include <stdio.h>
#include <curses.h>
#include <math.h>  
#include <string.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next, *prev;
}*head, *tail, *current;

int i, count = 0;

void depan(int data){
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = data;
    current -> next = current -> prev = NULL;

    if (head == NULL)
    {
        head = tail = current;
    }
    else
    {
        head -> prev = current;
        current ->next = head;
        head = current;
    }
    count ++;    
}

void belakang(int data){
    current = (struct node*)malloc(sizeof(struct node));
    current -> data = data;
    current -> next = current -> prev = NULL;

    if (head == NULL)
    {
        head = tail = current;
    }
    else
    {
        current -> prev = tail;
        tail ->next = current;
        tail = current;
    }
    count ++;    
}

void tengah(int data){
    if (head == NULL)
    {
        depan(data);
    }
    else if (count > 1)
    {
        current = (struct node*)malloc(sizeof(struct node));
        current -> data = data;
        current -> next = current ->prev = NULL;
        struct node *temp = head;
        for (int i = 0; i < count/2; i++)
        {
            temp = temp -> next;
        }
        current -> prev = temp -> prev;
        current -> next = temp;
        temp -> prev ->next = current;
        temp -> prev = current;
        count ++; 
    }
    else
    {
        belakang(data);
    }   
}

void print(){
    current = head;
    if (current != NULL)
    {
        while (current != NULL)
        {
            printf("%d", current -> data);
            current = current -> next;
        }
        printf("\n");
    }
    else
    {
        printf("tidak ada data\n");
    }
}

int main(){
    int pilih, data;

    while (pilih != 5)
    {
        printf("1. memasukkan data dari depan!\n");
        printf("2. memasukkan data dari belakang!\n");
        printf("3. memasukkan data dari tengah!\n");
        printf("4. print seluruh data\n");
        printf("5. keluar\n");
        printf("masukkan pilihan anda!\n");
        scanf("%d",&pilih);

        switch (pilih)
        {
        case 1:
            printf("masukkkan data\n");scanf("%d",&data);
            depan(data);
            break;
        
        case 2:
            printf("masukkkan data\n");scanf("%d",&data);
            belakang(data);
            break;
        
        case 3:
            printf("masukkkan data\n");scanf("%d",&data);
            tengah(data);
            break;

        case 4:
            printf("seluruh data adalah : ");
            print();
            break;

        case 5:
            break;    
        default:
            print("inputan salah");
            break;
        }

    }
    return 0;
}
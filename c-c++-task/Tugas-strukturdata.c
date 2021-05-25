#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
}*head,*tail,*tanda;

void push(int x){
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = x;

    if (head != NULL)
    {
        new_node->next = head;
        new_node->prev = tail;
        tail->next = new_node;
        head->prev = new_node;
        tail = new_node;
    }
    else
    {
        head = new_node;
        tail = new_node;
    }
    
    
}

void belakang(int x){
    struct node *new_node;
    new_node = (struct node*) malloc (sizeof(struct node));
    new_node -> data = x;
    if (head != NULL)
    {
       head->prev = new_node;
       new_node->next = head;
       head = new_node;
    }
    else
    {
        head = new_node;
        tail = new_node;
    }
    
    
}

void search(int x){
    struct node *l;
    tanda = head;
    while (tanda != NULL)
    {
        l = tanda;
        if (tanda->data == x)
        {
            printf("%d\t",tanda->data);
            break;
        }
        tanda = tanda->next;
    }
    printf("\n");
}

void delete_belakang(){
    head = head->next;
    head->prev = tail;
    tail->next = head;
}

void tampilkan(){

    struct node *l;
    printf("dari arah depan\n");
    while (head != NULL)
    {
        printf("%d\t",head->data);
        l = head;
        if (head == tail)
        {
            break;
        }
        head = head->next;
    }
    printf("\n");
}

int main(){
    
    int pilih,x;
    while (pilih !=5)
    {
        printf("\tpilihlah pilihan anda\t\n");
        printf("1. memasukkan data dari depan\n");
        printf("2. memasukkan data dari belakang\n");
        printf("3. mencari data yang bernilai keinginan anda\n");
        printf("4. mendelet data dari belakang\n");
        printf("5. print seluruh data\n");
        scanf("%d",&pilih);

        switch (pilih)
        {
        case 1:
            printf("masukkan data");scanf("%d",&x);
            push(x);
            break;
        case 2:
            printf("masukkan data");scanf("%d",&x);
            belakang(x);
            break;
        case 3:
            printf("masukkan data");scanf("%d",&x);
            search(x);
            break;
        case 4:
            delete_belakang();
            break;
        case 5:
            tampilkan();
            break;
        
        default:
            break;
        }
    }
    
  

    return 0;
}
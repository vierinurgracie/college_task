#include <stdio.h>
#include <stdlib.h>


// struct node {
//     int data;
//     struct node* next;
//     struct node* prev;
// }*head, *next_node;

// void depan(int x){
//     struct node *new_node;
//     new_node = (struct node*) malloc (sizeof(struct node));
//     new_node->data = x;
//     new_node->next = head;
//     new_node->prev = NULL;

//     if (head != NULL)
//     {
//         head->prev = new_node;
//         head = new_node;
//     }   
// }

// void insertBefore(int y){
//     if (next_node == NULL)
//     {
//         printf("next node tidak boleh kosong");
//         return;
//     }
//     struct node *new_node;
//     new_node = (struct node*) malloc (sizeof(struct node));

//     new_node ->data = y;
//     new_node ->prev = next_node->prev;
//     next_node ->prev = new_node;
//     new_node ->next = next_node;

//     if (new_node->prev == NULL)
//     {
//         new_node->prev->next = new_node;
//     }
//     else
//     {
//         head = new_node;
//     }
// }

// void tampilkan(){
//     struct node *l;
//     printf("dari arah depan");
//     while (head == NULL){}
//     {
//         printf("%d", head->data);
//         l = head;
//         head = head->next;
//     }

//     printf("dari arah depan");
//     while (l == NULL){}
//     {
//         printf("%d", l->data);
//         l = l-> prev;
//     }
// }

// int main(){
//     struct node *head = NULL;
//     depan(2);
//     depan(3);
//     depan(4);
//     depan(5);
//     insertBefore(7);

//     printf("double linked list");
//     tampilkan(head);
    
//     getchar();
//     return 0;
// }

// mendefinisikan data struct
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

// menyisipkan node baru di bagian depan list
void push(struct Node** head_refrensi, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_refrensi);
    new_node->prev = NULL;

    if((*head_refrensi) != NULL)
        (*head_refrensi)->prev = new_node;

    (*head_refrensi) = new_node;
}

// masukkan node baru sebelum node yang ada
void insertBefore(struct Node** head_refrensi, struct Node* next_node, int new_data){
    // 1. cek jika next_node bukan NULL
    if (next_node == NULL){
        printf("Next Node Tidak Boleh NULL!");
        return;
    }
    // 2. alokasi node baru
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    // 3. input ke data
    new_node->data = new_data;
    // 4. buat prev dari simpul baru sebagai prev dari next_node
    new_node->prev = next_node->prev;
    // 5. jadikan prev next_node sebagai new_node
    next_node->prev = new_node;
    // 6. jadikan next_node sebagai next dari new_node
    new_node->next = next_node;
    // 7. ubah prev pada new_node menjadi next
    if(new_node->prev != NULL)
        new_node->prev->next = new_node;
    // 8. jika prev new_node adalah NULL, maka akan menjadi head node yang baru
    else
        (*head_refrensi) = new_node;
}

// print list
void printList(struct Node* node){
    struct Node* last;
    printf("\nTampil dari arah depan : \n");
    while (node != NULL){
        printf("%d", node->data);
        last = node;
        node = node->next;
    }
    printf("\nTampil dari arah belakang : \n");
    while (last != NULL){
        printf("%d", last->data);
        last = last->prev;
    }
}

int main(){
    struct Node* head = NULL; //mulai dengan head = NULL
    push(&head, 2);
    push(&head, 3);
    push(&head, 5);
    push(&head, 1);
    // insert 8 sebelum 5, maka linked list menjadi 1->8->5->3->2->NULL
    insertBefore(&head, head->next, 8);
    printf("Double Linked List : ");
    printList(head);
    getchar();
    return 0;
}
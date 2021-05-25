#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct node
// {
//     int info;
//     int priority;
//     struct node *link;
// };

// void display(struct node *start);
// struct node *tambah(struct node *start, int num, int priority);
// struct node *swap(struct node *start, int priority);

// int main()
// {
//     struct node *start = NULL;
//     int choice, num, priority;

//     while (1)
//     {
//         printf("\n1. display\n");
//         printf("2. menambahkan node dilist\n");
//         printf("9. exit\n");

//         scanf("%d",&choice);
//         switch (choice)
//         {
//         case 1:
//             display(start);    
//             break;
//         case 2:
//             printf("masukkan nilai:");
//             scanf("%d",&num);
//             printf("masukkan priority:");
//             scanf("%d",&priority);
//             start = tambah(start,num,priority);
//             break;
//         case 9:
//             exit(1);
//             break;
        
//         default:
//             printf("invalid choice");
//         }
    
//     }
    
// }

// void display(struct node *start)
// {
//     struct node *p;
//     if (start == 0)
//     {
//         printf("linked list kosong\n");
//         return;
//     }
//     p = start;

//         while (p != NULL)
//         {
//             printf("%d.%d,",p->info, p->priority);
            
//             p = p->link;
//         }
// }

// struct node *tambah(struct node *start, int num, int priority)
// {
//     struct node *tmp;
//     tmp = (struct node*) malloc (sizeof(struct node));
//     tmp->info = num;
//     tmp->priority = priority;
//     tmp->link = start;
//     start = tmp;
//     return start;
// }

struct node
{
    int nilai,priority;
    struct node *link;
} *depan, *belakang, *current;

void insert_depan(int n, int p){
    current = (struct node*)malloc (sizeof(struct node));
    current ->nilai = n;
    current ->priority = p;

    if (depan == NULL)
    {
        depan = belakang = current;
    }
    else
    {
        current->link = depan;
    }
}

void insert_belakang(int n, int p){
    current = (struct node*)malloc (sizeof(struct node));
    current ->nilai = n;
    current ->priority = p;

    if (depan == NULL)
    {
        depan = belakang = current;
    }
    else
    {
        belakang->link = current;
        belakang = current;
    }
    belakang ->link = NULL;
}

void insert_tengah(int n, int p){
    current = (struct node*)malloc (sizeof(struct node));
    current ->nilai = n;
    current ->priority = p;

    if (depan == NULL)
    {
        depan = belakang = current;
    }
    else if (current->priority > depan->priority)
    {
        insert_depan(n, p);
    }
    else if (current->priority < belakang->priority)
    {
        insert_belakang(n, p);
    }
    else
    {
        struct node *tmp = depan;
        while (tmp->link->priority == current->priority)
        {
            tmp = tmp->link;
        }
        current->link = tmp->link;
        tmp->link = current;
    }
}
void tampilkan(){
    current = depan;
    while (current != NULL)
    {
        printf("%d.%d\t",current->nilai, current->priority);
        current = current->link;
    }
    
}

int main(){
    int i, nilai, priority;
    printf("priority 1 = terpenting\n");
    printf("priority 0 = biasa\n");

    for ( i = 0; i < 5; i++)
    {
        printf("masukkan nilai:");
        scanf("%d",&nilai);

        printf("masukkan priority(1/0): ");
        scanf("%d",&priority);

        while (priority < 0 || priority >1)
        {
            printf("inputan priority salah");
            scanf("%d",&priority);
        }
        if (priority == 1)
        {
            insert_tengah(nilai, priority);
        }
        else
        {
            insert_belakang(nilai, priority);
        }
        
        
    }
    tampilkan();
    return 0;
}   
    

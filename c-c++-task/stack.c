#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(){
//     char data[100];
//     char data2[100];
//     int panjang;
//     int tanda;

//     printf("\tmengecek kalimat polindrom\t\n");
//     printf("masukkan kalimat "); gets(data);
    
//     panjang = strlen(data);

//     for (int i = 0; i < panjang; i++)
//     {
//         data2[i] = data[panjang-1-i];
//     }
    
//     for (int i = 0; i < panjang; i++)
//     {
//         if (data[i] != data2[i])
//         {
//             tanda = 0;
//             break;
//         }
//         tanda = 1;
//     }
//     if (tanda == 1)
//     {
//         printf("%s dibalik %s kalimat tersebut polindrom\n",data,data2);
//     }
//     else
//     {
//         printf(" kalimat tersebut tidak polindrom\n");
//     }
//     return 0;
// }

struct stack{
    char data;
    struct stack* next;
}*top;

int longer;

void push(char x){
    struct stack* new_stack;
    new_stack = (struct stack*)malloc(sizeof(struct stack));
    new_stack->data = x;

    if (top == NULL)
    {
        new_stack->next = NULL;
        top = new_stack;
    }
    else
    {
        new_stack->next = top;
        top = new_stack;
    }
}


int main(){
    
    char data[100],x;
    int tanda = 0;
    printf("masukkkan kalimat : ");gets(data);
    longer = strlen(data);

    for (int i = 0; i < longer; i++)
    {
        x = data[i];
        push(x);
    }
    for (int i = 0; i < longer; i++)
    {
        if (top->data != data[i])
        {
            printf("%s kalimat ini bukan polindrom\n",data);
            break;
            tanda = 0;
        }
        else
        {
            tanda = 1;
        }
        top = top->next;
    }
    if (tanda ==1)
    {
        printf("%s kalimat ini polindrom\n",data);
    }
    

   return 0;
}
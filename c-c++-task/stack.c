#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
    char data;
    struct stack* next;
} * top;

int longer;

void push(char x) {
    struct stack* new_stack;
    new_stack = (struct stack*)malloc(sizeof(struct stack));
    new_stack->data = x;

    if (top == NULL) {
        new_stack->next = NULL;
        top = new_stack;
    } else {
        new_stack->next = top;
        top = new_stack;
    }
}

int main() {
    char data[100], x;
    int tanda = 0;
    printf("masukkkan kalimat : ");
    gets(data);
    longer = strlen(data);

    for (int i = 0; i < longer; i++) {
        x = data[i];
        push(x);
    }
    for (int i = 0; i < longer; i++) {
        if (top->data != data[i]) {
            printf("%s kalimat ini bukan polindrom\n", data);
            break;
            tanda = 0;
        } else {
            tanda = 1;
        }
        top = top->next;
    }
    if (tanda == 1) {
        printf("%s kalimat ini polindrom\n", data);
    }

    return 0;
}
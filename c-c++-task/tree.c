#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *kiri;
    struct node *kanan;
};

void tambah(struct node **root, int DataBaru) {
    if ((*root) == NULL) {
        struct node *baru;
        baru = (struct node*)malloc(sizeof(struct node));
        baru->data = DataBaru;
        baru->kanan = NULL;
        baru->kiri = NULL;
        (*root) = baru;
        (*root)->kanan = NULL;
        (*root)->kiri = NULL;
    } else if (DataBaru < (*root)->data) {
        tambah(&(*root)->kiri, DataBaru);
    } else if (DataBaru > (*root)->data) {
        tambah(&(*root)->kanan, DataBaru);
    } else if (DataBaru == (*root)->data) {
        printf("data sudah ada");
    }
}

void preOrder(struct node *root) {
    if (root != NULL) {
        
        preOrder(root->kiri);
        printf("%d", root->data);
        preOrder(root->kanan);
    }
}

void main() {
    struct node *root;
    root = NULL;
    tambah(&root, 10);
    tambah(&root, 8);
    tambah(&root, 9);
    tambah(&root, 7);
    tambah(&root, 15);
    tambah(&root, 16);
    tambah(&root, 14);
    preOrder(root);
}
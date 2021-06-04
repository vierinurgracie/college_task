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
        baru = (struct node *)malloc(sizeof(struct node));
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

void ascending(struct node *root) {
    if (root != NULL) {
        ascending(root->kiri);
        printf("%d, ", root->data);
        ascending(root->kanan);
    }
}

void descending(struct node *root) {
    if (root != NULL) {
        descending(root->kanan);
        printf("%d, ", root->data);
        descending(root->kiri);
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
    printf("pengurutan ascending(dari terkecil-terbesar): ");
    ascending(root);
    printf("\n");
    printf("pengurutan ascending(dari terbesar-terkecil): ");
    descending(root);
}
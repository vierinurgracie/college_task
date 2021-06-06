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

void search(struct node **root, int number) {
    if ((*root) != NULL) {
        if (number > (*root)->data) {
            search(&(*root)->kanan, number);
        } else if (number < (*root)->data) {
            search(&(*root)->kiri, number);
        } else if (number == (*root)->data) {
            printf("data yang dicari adalah %d \n", (*root)->data);
        }
    } else {
        printf("data yang dicari tidak ada\n");
    }
}

void sortDegree(struct node *root) {
    if (root != NULL) {
        printf("%d, ", root->data);
        sortDegree(root->kiri);
        sortDegree(root->kanan);
    }
}

void degree(struct node **root, int num) {
    if ((*root) != NULL) {
        if (num > (*root)->data) {
            degree(&(*root)->kanan, num);
        } else if (num < (*root)->data) {
            degree(&(*root)->kiri, num);
        } else if (num == (*root)->data) {
            printf("degree dari %d adalah ", num);
            sortDegree((*root));
        }
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
    printf("pengurutan descending(dari terbesar-terkecil): ");
    descending(root);
    printf("\n");
    search(&root, 7);
    degree(&root, 15);
}
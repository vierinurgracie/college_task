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

void sortDegreeLeft(struct node *root) {
    if (root != NULL) {
        // printf("%d, ", root->data);
        root = root->kiri;
        printf("%d,", root->data);
    }
}

void sortDegreeRight(struct node *root) {
    if (root != NULL) {
        // printf("%d, ", root->data);
        root = root->kanan;
        printf("%d", root->data);
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
            sortDegreeLeft((*root));
            sortDegreeRight((*root));
        }
    }
}

void find_parent(struct node *root, int val, int parent) {
    if (root == NULL) {
        return;
    }
    if (root->data == val) {
        printf("%d", parent);
    } else {
        find_parent(root->kiri, val, root->data);
        find_parent(root->kanan, val, root->data);
    }
}

void find_sibling(struct node **root, int data) {
    if ((*root) != NULL) {
        if (data > (*root)->data) {
            find_sibling(&(*root)->kanan, data);
        }
        if (data < (*root)->data) {
            find_sibling(&(*root)->kiri, data);
        }
        if (data == (*root)->data) {
            if ((*root)->kiri == NULL && (*root)->kanan == NULL) {
                printf("dont have sibling");
            } else {
                printf("%d have sibling ", data);
            }
            if ((*root)->kiri != NULL) {
                printf("%d, ", (*root)->kiri->data);
            }
            if ((*root)->kanan != NULL) {
                printf("%d", (*root)->kanan->data);
            }
        }
    }
}

void leaf_node(struct node *root) {
    if (!root)
        return;
    if (!root->kiri && !root->kanan) {
        printf("%d", root->data);
    }
    if (root->kiri) {
        leaf_node(root->kiri);
    }
    if (root->kanan) {
        leaf_node(root->kanan);
    }
}

void main() {
    struct node *root;
    root = NULL;
    int data;
    int pilih;

    do
    {
        printf("1. tambah data\n");
        printf("2. print data\n");
        scanf("%d",&pilih);
        
        if (pilih == 1)
        {
            scanf("%d",&data);
            tambah(&root,data);
        }
        else if (pilih == 2)
        {
            ascending(root);
            printf("\n");
        }
        else
        {
            break;
        }
        
        
            
    } while (pilih != 3);
    

    // tambah(&root, 10);
    // tambah(&root, 8);
    // tambah(&root, 9);
    // tambah(&root, 7);
    // tambah(&root, 15);
    // tambah(&root, 16);
    // tambah(&root, 14);
    // printf("pengurutan ascending(dari terkecil-terbesar): ");
    // ascending(root);
    // printf("\n");
    // printf("pengurutan descending(dari terbesar-terkecil): ");
    // descending(root);
    // printf("\n");
    // search(&root, 7);
    // degree(&root, 10);
    // printf("\n");
    // //find parent
    // find_parent(root, 8, -1);
    // printf("\n");
    // //show all leaf node
    // leaf_node(root);
    // printf("\n");
    // //find sibling
    // find_sibling(&root, 15);
}
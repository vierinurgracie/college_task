#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct queue {
    char nama[50];
    char tujuan[50];
    struct queue* next;
    struct queue* prev;
} * head, *tail, *head1, *tail1, *current;

int jml_CS;
int jml_teler;
void enqueue_CS(char x[], char y[]) {
    current = (struct queue*)malloc(sizeof(struct queue));
    strcpy(current->tujuan, y);
    strcpy(current->nama, x);

    if (head == NULL) {
        head = current;
        tail = current;
        head->next = NULL;
        head->prev = NULL;
    } else {
        current->next = NULL;
        head->next = current;
        head = current;
    }
    jml_CS++;
}

void enqueue_teler(char x[], char y[]) {
    current = (struct queue*)malloc(sizeof(struct queue));
    strcpy(current->tujuan, y);
    strcpy(current->nama, x);

    if (head1 == NULL) {
        head1 = current;
        tail1 = current;
        head1->next = NULL;
        head1->prev = NULL;
    } else {
        current->next = NULL;
        head1->next = current;
        head1 = current;
    }
    jml_teler++;
}

void print_CS() {
    head = tail;
    if (head == NULL) {
        printf("antrean kosong\n");
    }

    while (head != NULL) {
        printf("%s tujuan %s\t", head->nama, head->tujuan);
        if (head->next == NULL) {
            break;
        }

        head = head->next;
    }
    printf("jumlah antrian custumer service sebanyak %d\n", jml_CS);
}

void print_teler() {
    head1 = tail1;
    if (head1 == NULL) {
        printf("antrean kosong\n");
    }

    while (head1 != NULL) {
        printf("%s tujuan %s\t", head1->nama, head1->tujuan);
        if (head1->next == NULL) {
            break;
        }

        head1 = head1->next;
    }
    printf("jumlah antrian loket teler sebanyak %d\n", jml_teler);
}

int main() {
    char x[50], y;
    int tujuan;
    int pilih;

    while (pilih != 3) {
        printf("1. masuk antrian\n");
        printf("2. tampilkan\n");
        printf("3. exit\n");
        scanf("%d", &pilih);

        switch (pilih) {
            case 1:
                printf("pilih antrian : \n");
                printf("1. custumer service\n");
                printf("2. loket teler\n");
                scanf("%d", &tujuan);

                if (tujuan == 1) {
                    if (jml_CS == 20) {
                        printf("antrian Custumer service sudah full\n");
                        break;
                    }
                    printf("masukkan nama : \n");
                    scanf("%s", &x);
                    enqueue_CS(x, "custumer service");
                }
                if (tujuan == 2) {
                    if (jml_teler == 20) {
                        printf("antrian loket teler sudah full\n");
                        break;
                    }
                    printf("masukkan nama : \n");
                    scanf("%s", &x);
                    enqueue_teler(x, "loket teler");
                }
                break;

            case 2:
                print_CS();
                print_teler();
                break;

            case 3:
                exit;
                break;

            default:
                break;
        }
    }
}
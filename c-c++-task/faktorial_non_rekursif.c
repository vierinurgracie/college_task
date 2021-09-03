#include <curses.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int bilangan;
    int hasil = 1;
    printf("masukkan angka yang ingin di faktorialkan\n");
    scanf("%d", &bilangan);

    for (int i = 1; i <= bilangan; i++) {
        hasil = i * hasil;
    }

    printf("hasil faktorial= %d\n", hasil);
    printf("faktorial non rekusrif");
}
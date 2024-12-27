#include <stdio.h>

int main() {
    int angka[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }
    int cari;
    printf("Masukkan angka yang ingin dicari: ");
    scanf("%d", &cari);
    int indeks = -1;
    for (i = 0; i < 5; i++) {
        if (angka[i] == cari) {
            indeks = i;
            break;
        }
    }
    if (indeks != -1) {
        printf("Angka %d ditemukan pada indeks %d\n", cari, indeks);
    } else {
        printf("Angka %d tidak ditemukan dalam array\n", cari);
    }
    return 0;
}

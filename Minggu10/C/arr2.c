#include <stdio.h>

int main() {
    int angka[5] = {1, 2, 3, 4, 5};
    int indeks, nilaiBaru;

    printf("Masukkan indeks yang ingin diubah (0-4): ");
    scanf("%d", &indeks);
    printf("Masukkan nilai baru: ");
    scanf("%d", &nilaiBaru);

    angka[indeks] = nilaiBaru;

    printf("Isi array setelah perubahan: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
    return 0;
}

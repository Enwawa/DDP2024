#include <stdio.h>

int jumlahDeret(int n) {
    if (n == 0) return 0;
    return n + jumlahDeret(n - 1);
}

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("Jumlah deret dari 1 sampai %d adalah %d\n", angka, jumlahDeret(angka));
    return 0;
}

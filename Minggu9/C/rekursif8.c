#include <stdio.h>
#include <stdbool.h>

bool cekPangkatDua(int n) {
    if (n == 0) return false;
    if (n == 1) return true;
    if (n % 2 != 0) return false;
    return cekPangkatDua(n / 2);
}

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    if (cekPangkatDua(angka)) {
        printf("%d adalah pangkat dua.\n", angka);
    } else {
        printf("%d bukan pangkat dua.\n", angka);
    }
    return 0;
}

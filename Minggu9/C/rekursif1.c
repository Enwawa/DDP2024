#include <stdio.h>

int faktorial(int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("Faktorial dari %d adalah %d\n", angka, faktorial(angka));
    return 0;
}

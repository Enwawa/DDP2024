#include <stdio.h>

void cetakUrutan(int n) {
    if (n == 0) return;
    printf("%d ", n);
    cetakUrutan(n - 1);
}

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    cetakUrutan(angka);
    printf("\n");
    return 0;
}

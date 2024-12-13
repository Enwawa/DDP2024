#include <stdio.h>

int jumlahDigit(int n) {
    if (n == 0) return 0;
    return (n % 10) + jumlahDigit(n / 10);
}

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("Jumlah digit dari %d adalah %d\n", angka, jumlahDigit(angka));
    return 0;
}

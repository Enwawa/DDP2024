#include <stdio.h>
#include <stdbool.h>

bool cekPrima(int n, int i) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return false;
    if (i * i > n) return true;
    return cekPrima(n, i + 1);
}

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    if (cekPrima(angka, 2)) {
        printf("%d adalah bilangan prima.\n", angka);
    } else {
        printf("%d bukan bilangan prima.\n", angka);
    }
    return 0;
}

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    printf("Fibonacci dari %d adalah %d\n", angka, fibonacci(angka));
    return 0;
}

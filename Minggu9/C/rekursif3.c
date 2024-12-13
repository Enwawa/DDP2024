#include <stdio.h>

int pangkat(int x, int n) {
    if (n == 0) return 1;
    return x * pangkat(x, n - 1);
}

int main() {
    int x, n;
    printf("Masukkan basis: ");
    scanf("%d", &x);
    printf("Masukkan pangkat: ");
    scanf("%d", &n);
    printf("%d pangkat %d adalah %d\n", x, n, pangkat(x, n));
    return 0;
}

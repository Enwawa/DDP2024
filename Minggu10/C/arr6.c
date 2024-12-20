#include <stdio.h>

int main() {
    int angka[5];
    printf("Masukkan 5 angka: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &angka[i]);
    }
    
    int min = angka[0];
    for (int i = 1; i < 5; i++) {
        if (angka[i] < min) {
            min = angka[i];
        }
    }
    printf("Nilai minimum: %d\n", min);
    return 0;
}

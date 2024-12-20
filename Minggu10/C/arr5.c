#include <stdio.h>

int main() {
    int angka[5];
    printf("Masukkan 5 angka: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &angka[i]);
    }
    
    int maks = angka[0];
    for (int i = 1; i < 5; i++) {
        if (angka[i] > maks) {
            maks = angka[i];
        }
    }
    printf("Nilai maksimum: %d\n", maks);
    return 0;
}

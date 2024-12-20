#include <stdio.h>

int main() {
    int angka[5];
    printf("Masukkan 5 angka: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &angka[i]);
    }
    
    int jumlah = 0;
    for (int i = 0; i < 5; i++) {
        jumlah += angka[i];
    }
    
    printf("Jumlah total: %d\n", jumlah);
    return 0;
}

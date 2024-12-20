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
    double rataRata = (double)jumlah / 5;
    
    printf("Rata-rata: %.2f\n", rataRata);
    return 0;
}

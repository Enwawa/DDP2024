#include <stdio.h>

int main() {
    int angka[5];
    printf("Masukkan 5 angka: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &angka[i]);
    }
    
    for (int i = 0; i < 2; i++) {
        int temp = angka[i];
        angka[i] = angka[4 - i];
        angka[4 - i] = temp;
    }
    
    printf("Isi array setelah dibalik: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
    return 0;
}

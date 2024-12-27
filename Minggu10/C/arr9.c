#include <stdio.h>

int main() {
    int angka[5];
    int i,j;
    printf("Masukkan 5 angka: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &angka[i]);
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (angka[j] > angka[j + 1]) {
                int temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }
    
    printf("Isi array setelah diurutkan: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
    return 0;
}

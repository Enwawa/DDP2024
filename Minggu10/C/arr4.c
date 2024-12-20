#include <stdio.h>

int main() {
    int angka[5];
    for (int i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    printf("Isi array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
    return 0;
}

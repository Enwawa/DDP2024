#include <stdio.h>

int main() {
    printf("===============================================\n");
    printf("Pemrograman bahasa C If Else Positif Negatif\n");
    printf("===============================================\n");

    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    if (angka > 0) {
        printf("Positif\n");
    } else if (angka < 0) {
        printf("Negatif\n");
    } else {
        printf("Nol\n");
    }

    return 0;
}

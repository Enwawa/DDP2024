#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemograman bahasa C If Else Umur\n");
    printf("=================================\n");

    int umur;
    printf("Masukkan umur: ");
    scanf("%d", &umur);

    if (umur >= 18) {
        printf("Dewasa\n");
    } else {
        printf("Di bawah umur\n");
    }

    return 0;
}

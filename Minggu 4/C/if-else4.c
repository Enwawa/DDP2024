#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemrograman bahasa C If Else Nilai\n");
    printf("=================================\n");

    int nilai;
    printf("Masukkan Nilai Anda: ");
    scanf("%d", &nilai);

    if (nilai >= 85 && nilai <= 100) {
        printf("Nilai anda A\n");
    } else if (nilai >= 70 && nilai < 85) {
        printf("Nilai anda B\n");
    } else if (nilai >= 55 && nilai < 70) {
        printf("Nilai anda C\n");
    } else if (nilai >= 40 && nilai < 55) {
        printf("Nilai anda D\n");
    } else if (nilai >= 0 && nilai < 40) {
        printf("Remedial\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

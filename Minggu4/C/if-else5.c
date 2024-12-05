#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemrograman bahasa C If Else Ranking\n");
    printf("=================================\n");

    char ranking;
    printf("Masukkan Ranking: ");
    scanf(" %c", &ranking);

    if (ranking == 'A') {
        printf("Sangat Bagus\n");
    } else if (ranking == 'B') {
        printf("Bagus\n");
    } else if (ranking == 'C') {
        printf("Cukup\n");
    } else {
        printf("Buruk\n");
    }

    return 0;
}

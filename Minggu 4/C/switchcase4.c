#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemrograman bahasa C If Else Level\n");
    printf("=================================\n");

    int level;
    printf("Pilih level: ");
    scanf("%d", &level);

    switch (level) {
        case 1:
            printf("Pemula\n");
            break;
        case 2:
            printf("Menengah\n");
            break;
        case 3:
            printf("Senior\n");
            break;
        default:
            printf("Level tidak ditemukan\n");
    }


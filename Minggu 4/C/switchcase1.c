#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemrograman bahasa C Switch Case Hari\n");
    printf("=================================\n");

    int hari;
    printf("Pilih Hari: ");
    scanf("%d", &hari);

    switch (hari) {
        case 1:
            printf("Senin\n");
            break;
        case 2:
            printf("Selasa\n");
            break;
        case 3:
            printf("Rabu\n");
            break;
        case 4:
            printf("Kamis\n");
            break;
        case 5:
            printf("Jum'at\n");
            break;
        case 6:
            printf("Sabtu\n");
            break;
        case 7:
            printf("Minggu\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}

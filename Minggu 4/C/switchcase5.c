#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemrograman bahasa C If Else Opsi\n");
    printf("=================================\n");

    int opsi;
    printf("Pilih Opsi: ");
    scanf("%d", &opsi);

    switch (opsi) {
        case 1:
            printf("Start\n");
            break;
        case 2:
            printf("Pause\n");
            break;
        case 3:
            printf("Stop\n");
            break;
        case 4:
            printf("Restart\n");
            break;
        default:
            printf("Opsi tidak ditemukan\n");
    }

    return 0;
}

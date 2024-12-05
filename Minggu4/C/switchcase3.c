#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemrograman bahasa C If Else Bulan\n");
    printf("=================================\n");

    int bulan;
    printf("Pilih bulan: ");
    scanf("%d", &bulan);

    switch (bulan) {
        case 1:
            printf("Januari\n");
            break;
        case 2:
            printf("Februari\n");
            break;
        case 3:
            printf("Maret\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("Mei\n");
            break;
        default:
            printf("Bulan lainnya\n");
    }

    return 0;
}

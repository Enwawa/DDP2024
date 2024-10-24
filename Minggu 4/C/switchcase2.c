#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemrograman bahasa C Switch Case Huruf\n");
    printf("=================================\n");

    char huruf;
    printf("Huruf: ");
    scanf(" %c", &huruf);

    switch (huruf) {
        case 'a':
            printf("Vokal\n");
            break;
        case 'e':
            printf("Vokal\n");
            break;
        case 'i':
            printf("Vokal\n");
            break;
        case 'o':
            printf("Vokal\n");
            break;
        case 'u':
            printf("Vokal\n");
            break;
        default:
            printf("Konsonan\n");
    }

    return 0;
}

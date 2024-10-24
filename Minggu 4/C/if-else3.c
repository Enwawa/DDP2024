#include <stdio.h>

int main() {
    printf("=================================\n");
    printf("Pemrograman bahasa C If Else Suhu\n");
    printf("=================================\n");

    int suhu;
    printf("Masukkan Suhu: ");
    scanf("%d", &suhu);

    if (suhu > 34) {
        printf("Panas\n");
    } else if (suhu >= 27) {
        printf("Hangat\n");
    } else {
        printf("Dingin\n");
    }

    return 0;
}

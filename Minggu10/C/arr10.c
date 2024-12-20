#include <stdio.h>

int main() {
    char nama[5][50];
    for (int i = 0; i < 5; i++) {
        printf("Masukkan nama ke-%d: ", i + 1);
        scanf("%s", nama[i]);
    }
    printf("Nama-nama yang dimasukkan: ");
    for (int i = 0; i < 5; i++) {
        printf("%s ", nama[i]);
    }
    printf("\n");
    return 0;
}

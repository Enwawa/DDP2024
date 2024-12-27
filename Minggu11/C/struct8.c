#include <stdio.h>
#include <string.h>

struct buah {
    char warna[20];
    float berat;
    int harga;
    char rasa[20];
};

int main() {
    struct buah apel;
    struct buah jeruk;

    strcpy(apel.warna, "merah");
    apel.berat = 250.50f;
    apel.harga = 50000;
    strcpy(apel.rasa, "manis kesat");

    strcpy(jeruk.warna, "orange");
    jeruk.berat = 250.50f;
    jeruk.harga = 20000;
    strcpy(jeruk.rasa, "asam");

    printf("Apel\n");
    printf("- %s\n", apel.warna);
    printf("- %.2f\n", apel.berat);
    printf("- %d\n", apel.harga);
    printf("- %s\n", apel.rasa);
    printf("==================\n");

    printf("Jeruk\n");
    printf("- %s\n", jeruk.warna);
    printf("- %.2f\n", jeruk.berat);
    printf("- %d\n", jeruk.harga);
    printf("- %s\n", jeruk.rasa);

    return 0;
}

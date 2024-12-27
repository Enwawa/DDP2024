#include <stdio.h>
#include <string.h>

struct Buah {
    char warna[20];
    float berat;
    int harga;
    char rasa[20];
};

int main() {
    struct Buah apel;
    struct Buah jeruk;

    // Inisialisasi data apel
    strcpy(apel.warna, "merah");
    apel.berat = 250.50f;
    apel.harga = 50000;
    strcpy(apel.rasa, "manis kesat");

    // Inisialisasi data jeruk
    strcpy(jeruk.warna, "orange");
    jeruk.berat = 250.50f;
    jeruk.harga = 20000; // Perbaikan: ini adalah harga
    strcpy(jeruk.rasa, "asam");

    // Output data apel
    printf("- %s\n", apel.warna);
    printf("- %.2f\n", apel.berat);
    printf("- %s\n", apel.rasa);

    // Output data jeruk
    printf("- %s\n", jeruk.warna);
    printf("- %.2f\n", jeruk.berat);
    printf("- %s\n", jeruk.rasa);

    return 0;
}

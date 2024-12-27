#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char nama[50];
    char nim[20];
    int usia;
    float ipk;
};

int main() {
    struct Mahasiswa mhs;

    // Inisialisasi data Mahasiswa
    strcpy(mhs.nim, "A123");
    strcpy(mhs.nama, "Agus");
    mhs.usia = 25;
    mhs.ipk = 3.98;

    // Menampilkan data Mahasiswa
    printf("NIM: %s\n", mhs.nim);
    printf("Nama: %s\n", mhs.nama);
    printf("IPK: %.2f\n", mhs.ipk);

    return 0;
}

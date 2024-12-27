#include <stdio.h>
#include <string.h>

struct Alamat {
    char jalan[50];
    char kota[50];
};

struct Aku {
    char nama[50];
    int umur;
    struct Alamat alamat;
};

int main() {
    struct Aku p;
    strcpy(p.nama, "Enwa");
    p.umur = 18;
    strcpy(p.alamat.jalan, "Dongko-Kampak");
    strcpy(p.alamat.kota, "Trenggalek");

    printf("Nama: %s, Umur: %d\n", p.nama, p.umur);
    printf("Alamat: %s, %s\n", p.alamat.jalan, p.alamat.kota);

    return 0;
}

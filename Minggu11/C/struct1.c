#include <stdio.h>
#include <string.h>

struct Person {
    char nama[50];
    int umur;
};

int main() {
    struct Person p;
    strcpy(p.nama, "Enwa");  // Menggunakan strcpy untuk mengisi string
    p.umur = 18;

    printf("Nama: %s, Age: %d\n", p.nama, p.umur);
    return 0;
}
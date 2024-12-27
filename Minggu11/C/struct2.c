#include <stdio.h>
#include <string.h>

struct Person {
    char nama[50];
    int umur;
};

int main() {
    struct Person p;
    
    // Inisialisasi data Person
    strcpy(p.nama, "Enwa");
    p.umur = 20;

    // Menampilkan data Person
    printf("Nama: %s, Umur: %d\n", p.nama, p.umur);
    
    return 0;
}

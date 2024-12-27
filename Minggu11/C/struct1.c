#include <stdio.h>
#include <string.h>

struct Person {
    char nama[50];
    int umur;
};

int main() {
    struct Person p;
    strcpy(p.nama, "Enwa");
    p.umur = 18;

    printf("Nama: %s, Umur: %d\n", p.nama, p.umur);
    return 0;
}
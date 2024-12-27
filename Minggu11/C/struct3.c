#include <stdio.h>
#include <string.h>

struct Orang {
    char nama[50];
    int umur;
};

int main() {
    struct Orang orang[3] = {
        {"Enwa", 18},
        {"Fatih", 19},
        {"Afiq", 20}
    };

    for (int i = 0; i < 3; i++) {
        printf("Nama: %s, Umur: %d\n", orang[i].nama, orang[i].umur);
    }

    return 0;
}

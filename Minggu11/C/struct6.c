#include <stdio.h>
#include <string.h>

struct Orang {
    char nama[50];
    int umur;
};

void pekenalan(struct Orang* p) {
    printf("Halo namaku %s dan umurku %d tahun.\n", p->nama, p->umur);
}

int main() {
    struct Orang p;
    strcpy(p.nama, "Enwa");
    p.umur = 18;
    pekenalan(&p);
    
    return 0;
}

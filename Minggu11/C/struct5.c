#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Identitas {
    char nama[50];
    int umur;
};

int main() {
    struct Identitas* p = (struct Identitas*)malloc(sizeof(struct Identitas));

    if (p == NULL) {
        printf("Gagal mengalokasikan memori.\n");
        return 1;
    }

    strcpy(p->nama, "Stefenny");
    p->umur = 19;

    printf("Nama: %s, Umur: %d\n", p->nama, p->umur);

    free(p); 
    return 0;
}

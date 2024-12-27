#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char nama[50];
    int umur;
};

int main() {
    struct Person p;
    FILE *outFile, *inFile;

    printf("Enter nama: ");
    scanf("%s", p.nama);
    printf("Enter umur: ");
    scanf("%d", &p.umur);

    outFile = fopen("Nama.txt", "w");
    if (outFile == NULL) {
        printf("Gagal membuka file untuk menulis.\n");
        return 1;
    }
    fprintf(outFile, "%s %d\n", p.nama, p.umur);
    fclose(outFile);

    struct Person q;
    inFile = fopen("Nama.txt", "r");
    if (inFile == NULL) {
        printf("Gagal membuka file untuk membaca.\n");
        return 1;
    }
    fscanf(inFile, "%s %d", q.nama, &q.umur);
    fclose(inFile);

    printf("nama: %s, umur: %d\n", q.nama, q.umur);

    return 0;
}

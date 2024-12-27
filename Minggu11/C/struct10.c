#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Barang {
    int id;
    char nama[50];
    float harga;
    int jumlah;
};

void isiData(struct Barang* b, int id, const char* nama, float harga, int jumlah) {
    b->id = id;
    strcpy(b->nama, nama);
    b->harga = harga;
    b->jumlah = jumlah;
}

void tampilkanData(const struct Barang* b) {
    printf(" ID Barang     : %d\n", b->id);
    printf(" Nama Barang   : %s\n", b->nama);
    printf(" Harga Barang  : %.2f\n", b->harga);
    printf(" Jumlah Barang : %d\n", b->jumlah);
}

float hitungTotalHarga(const struct Barang* b, int jumlah) {
    float total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += b[i].harga * b[i].jumlah;
    }
    return total;
}

int main() {
    int jumlahBarang;
    printf(" Masukkan Jumlah Barang: ");
    scanf("%d", &jumlahBarang);

    struct Barang* daftarBarang = (struct Barang*)malloc(jumlahBarang * sizeof(struct Barang));
    if (daftarBarang == NULL) {
        printf("Gagal mengalokasikan memori.\n");
        return 1;
    }

    for (int i = 0; i < jumlahBarang; i++) {
        int id, jumlah;
        char nama[50];
        float harga;

        printf("Masukkan Data Barang ke-%d\n", i + 1);
        printf("ID: ");
        scanf("%d", &id);
        printf("Nama: ");
        getchar(); // Membersihkan newline dari buffer
        fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = '\0'; // Menghapus newline dari input
        printf("Harga: ");
        scanf("%f", &harga);
        printf("Jumlah: ");
        scanf("%d", &jumlah);

        isiData(&daftarBarang[i], id, nama, harga, jumlah);
        printf("==============================================\n");
    }

    printf("\n\tData Barang\n");
    for (int i = 0; i < jumlahBarang; i++) {
        tampilkanData(&daftarBarang[i]);
        printf("================================================\n");
    }

    float totalHarga = hitungTotalHarga(daftarBarang, jumlahBarang);
    printf(" Total Harga Semua Barang: Rp. %.2f\n", totalHarga);

    free(daftarBarang);
    return 0;
}

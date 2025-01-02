#include <iostream>
#include <iomanip> // untuk manipulasi output (misal: setw, setprecision)
#include <fstream> // untuk operasi file

using namespace std;

const int MAKS_BARANG = 100; // Batas maksimum barang dalam keranjang

struct Barang {
    string nama;
    int jumlah;
    double harga;
};

void cetakStruk(Barang keranjang[], int jumlahBarang, double total, double uang, double kembalian) {
    ofstream file("struk_belanja.txt");
    if (file.is_open()) {
        file << "========== STRUK BELANJA ==========" << endl;
        file << "Nama Barang        Jumlah    Harga     Total" << endl;
        file << "---------------------------------------------" << endl;
        for (int i = 0; i < jumlahBarang; ++i) {
            file << left << setw(15) << keranjang[i].nama
                 << setw(10) << keranjang[i].jumlah
                 << setw(10) << keranjang[i].harga
                 << keranjang[i].jumlah * keranjang[i].harga << endl;
        }
        file << "---------------------------------------------" << endl;
        file << "Total Harga : Rp " << total << endl;
        file << "Uang Dibayar: Rp " << uang << endl;
        file << "Kembalian   : Rp " << kembalian << endl;
        file << "=============================================" << endl;
        file.close();
        cout << "Struk berhasil dicetak ke file struk_belanja.txt\n";
    } else {
        cout << "Gagal mencetak struk ke file.\n";
    }
}

void tampilkanMenu() {
    cout << "1. Tambah Barang\n";
    cout << "2. Tampilkan Keranjang\n";
    cout << "3. Pembayaran\n";
    cout << "4. Keluar\n";
    cout << "Pilih opsi: ";
}

void tampilkanKeranjang(Barang keranjang[], int jumlahBarang) {
    if (jumlahBarang == 0) {
        cout << "Keranjang kosong.\n";
        return;
    }

    cout << "\nNama Barang        Jumlah    Harga     Total\n";
    cout << "---------------------------------------------\n";
    for (int i = 0; i < jumlahBarang; ++i) {
        cout << left << setw(15) << keranjang[i].nama
             << setw(10) << keranjang[i].jumlah
             << setw(10) << keranjang[i].harga
             << keranjang[i].jumlah * keranjang[i].harga << "\n";
    }
}

void pembayaran(Barang keranjang[], int jumlahBarang) {
    if (jumlahBarang == 0) {
        cout << "Keranjang kosong. Tidak ada yang perlu dibayar.\n";
        return;
    }

    tampilkanKeranjang(keranjang, jumlahBarang);
    double total = 0;
    for (int i = 0; i < jumlahBarang; ++i) {
        total += keranjang[i].jumlah * keranjang[i].harga;
    }
    cout << "Total: Rp " << total << "\nMasukkan uang: Rp ";
    double uang;
    cin >> uang;
    double kembalian = uang - total;
    cout << "Kembalian: Rp " << kembalian << "\n";

    cetakStruk(keranjang, jumlahBarang, total, uang, kembalian);
}

int main() {
    Barang keranjang[MAKS_BARANG];
    int jumlahBarang = 0, pilihan;

    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                if (jumlahBarang >= MAKS_BARANG) {
                    cout << "Keranjang penuh.\n";
                } else {
                    cout << "Nama barang: ";
                    cin.ignore();
                    getline(cin, keranjang[jumlahBarang].nama);
                    cout << "Jumlah: ";
                    cin >> keranjang[jumlahBarang].jumlah;
                    cout << "Harga: ";
                    cin >> keranjang[jumlahBarang].harga;
                    jumlahBarang++;
                }
                break;

            case 2:
                tampilkanKeranjang(keranjang, jumlahBarang);
                break;

            case 3:
                pembayaran(keranjang, jumlahBarang);
                break;

            case 4:
                cout << "Terima kasih!\n";
                break;

            default:
                cout << "Pilihan tidak valid. Coba lagi.\n";
                break;
        }
    } while (pilihan != 4);

    return 0;
}


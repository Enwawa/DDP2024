#include <iostream>
using namespace std;

int main() {
    int angka[5];
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }
    int cari;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> cari;
    int indeks = -1;
    for (int i = 0; i < 5; i++) {
        if (angka[i] == cari) {
            indeks = i;
            break;
        }
    }
    if (indeks != -1) {
        cout << "Angka " << cari << " ditemukan pada indeks " << indeks << endl;
    } else {
        cout << "Angka " << cari << " tidak ditemukan dalam array" << endl;
    }
    return 0;
}

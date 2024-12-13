#include <iostream>
using namespace std;

int faktorialIteratif(int n) {
    if (n < 0) return -1; // Return -1 untuk angka negatif
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Angka tidak boleh negatif." << endl;
        return 1;
    }

    cout << "Faktorial dari " << angka << " adalah " << faktorialIteratif(angka) << endl;

    return 0;
}

#include <iostream>
using namespace std;

bool cekPangkatDua(int n) {
    if (n == 0) return false;
    if (n == 1) return true;
    if (n % 2 != 0) return false;
    return cekPangkatDua(n / 2);
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    if (cekPangkatDua(angka)) {
        cout << angka << " adalah pangkat dua." << endl;
    } else {
        cout << angka << " bukan pangkat dua." << endl;
    }
    return 0;
}

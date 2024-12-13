#include <iostream>
using namespace std;

int jumlahDeret(int n) {
    if (n == 0) return 0;
    return n + jumlahDeret(n - 1);
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Jumlah deret dari 1 sampai " << angka << " adalah " << jumlahDeret(angka) << endl;
    return 0;
}

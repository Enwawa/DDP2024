#include <iostream>
using namespace std;

int jumlahDigit(int n) {
    if (n == 0) return 0;
    return (n % 10) + jumlahDigit(n / 10);
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Jumlah digit dari " << angka << " adalah " << jumlahDigit(angka) << endl;
    return 0;
}

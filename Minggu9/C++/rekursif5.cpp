#include <iostream>
using namespace std;

bool cekPrima(int n, int i = 2) {
    if (n <= 2) return (n == 2);
    if (n % i == 0) return false;
    if (i * i > n) return true;
    return cekPrima(n, i + 1);
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    if (cekPrima(angka)) {
        cout << angka << " adalah bilangan prima." << endl;
    } else {
        cout << angka << " bukan bilangan prima." << endl;
    }
    return 0;
}

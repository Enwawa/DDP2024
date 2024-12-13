#include <iostream>
using namespace std;

void cetakUrutan(int n) {
    if (n == 0) return;
    cout << n << " ";
    cetakUrutan(n - 1);
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cetakUrutan(angka);
    cout << endl;
    return 0;
}

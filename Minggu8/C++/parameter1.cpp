#include <iostream>
using namespace std;

// Fungsi untuk menghitung luas persegi panjang
double luasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

int main() {
    double panjang, lebar;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    double luas = luasPersegiPanjang(panjang, lebar);
    cout << "Luas persegi panjang: " << luas << endl;
    system("pause");
    return 0;
}

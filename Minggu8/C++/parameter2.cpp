#include <iostream>
#include <cmath> // untuk M_PI
using namespace std;

// Fungsi untuk menghitung luas lingkaran
double luasLingkaran(double jariJari) {
    return M_PI * jariJari * jariJari;
}

int main() {
    double jariJari;
    cout << "Masukkan jari-jari: ";
    cin >> jariJari;

    double luas = luasLingkaran(jariJari);
    cout << "Luas lingkaran: " << luas << endl;

    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int angka[5];
    cout << "Masukkan 5 angka: ";
    for (int i = 0; i < 5; i++) {
        cin >> angka[i];
    }
    
    int jumlah = 0;
    for (int i = 0; i < 5; i++) {
        jumlah += angka[i];
    }
    double rataRata = static_cast<double>(jumlah) / 5;
    
    cout << "Rata-rata: " << rataRata << endl;
    return 0;
}

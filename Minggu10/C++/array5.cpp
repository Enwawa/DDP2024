#include <iostream>
using namespace std;

int main() {
    int angka[5];
    cout << "Masukkan 5 angka: ";
    for (int i = 0; i < 5; i++) {
        cin >> angka[i];
    }
    
    int maks = angka[0];
    for (int i = 1; i < 5; i++) {
        if (angka[i] > maks) {
            maks = angka[i];
        }
    }
    cout << "Nilai maksimum: " << maks << endl;
    return 0;
}

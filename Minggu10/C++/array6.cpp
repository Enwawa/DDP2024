#include <iostream>
using namespace std;

int main() {
    int angka[5];
    cout << "Masukkan 5 angka: ";
    for (int i = 0; i < 5; i++) {
        cin >> angka[i];
    }
    
    int min = angka[0];
    for (int i = 1; i < 5; i++) {
        if (angka[i] < min) {
            min = angka[i];
        }
    }
    cout << "Nilai minimum: " << min << endl;
    return 0;
}

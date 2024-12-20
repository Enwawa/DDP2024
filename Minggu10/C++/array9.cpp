#include <iostream>
using namespace std;

int main() {
    int angka[5];
    cout << "Masukkan 5 angka: ";
    for (int i = 0; i < 5; i++) {
        cin >> angka[i];
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (angka[j] > angka[j + 1]) {
                int temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }
    
    cout << "Isi array setelah diurutkan: ";
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;
    return 0;
}

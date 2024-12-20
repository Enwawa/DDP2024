#include <iostream>
using namespace std;

int main() {
    int angka[5];
    cout << "Masukkan 5 angka: ";
    for (int i = 0; i < 5; i++) {
        cin >> angka[i];
    }
    
    for (int i = 0; i < 2; i++) {
        int temp = angka[i];
        angka[i] = angka[4 - i];
        angka[4 - i] = temp;
    }
    
    cout << "Isi array setelah dibalik: ";
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;
    return 0;
}

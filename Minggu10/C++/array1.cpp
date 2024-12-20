#include <iostream>
using namespace std;

//Inisialisasi Array
#include <iostream>
using namespace std;

int main() {
    int angka[5];
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan angka ke-" << i + 1 << ": ";
        cin >> angka[i];
    }
    cout << "Isi array: ";
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;
    return 0;
}


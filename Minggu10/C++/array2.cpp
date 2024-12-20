#include <iostream>
using namespace std;
//Mengubah Nilai Array

int main() {
    int angka[5] = {1, 2, 3, 4, 5};
    int indeks, nilaiBaru;
    
    cout << "Masukkan indeks yang ingin diubah (0-4): ";
    cin >> indeks;
    cout << "Masukkan nilai baru: ";
    cin >> nilaiBaru;
    
    angka[indeks] = nilaiBaru;

    cout << "Isi array setelah perubahan: ";
    for (int i = 0; i < 5; i++) {
        cout << angka[i] << " ";
    }
    cout << endl;
    return 0;
}

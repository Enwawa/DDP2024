#include <iostream>
using namespace std;

int main() {
    string nama[5];
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan nama ke-" << i + 1 << ": ";
        cin >> nama[i];
    }
    cout << "Nama-nama yang dimasukkan: ";
    for (int i = 0; i < 5; i++) {
        cout << nama[i] << " ";
    }
    cout << endl;
    return 0;
}

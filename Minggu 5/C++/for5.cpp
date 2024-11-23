#include <iostream>
using namespace std;
int main() {
    cout << "================================="<< endl;
    cout << "Pemograman Bahasa C++ Kotak Angka" << endl;
    cout << "================================="<< endl;  
    int n;
    cout << "Masukkan ukuran kotak angka: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

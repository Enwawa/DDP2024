#include <iostream>
using namespace std;

int main(){
    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ Tabel Perkalian" << endl;
    cout << "================================="<< endl;

    int n;
    
    cout<< "Masukan angka tabel perkalian: ";
    cin >> n;

    cout << "tabel perkalian: " << n << " adalah:\n";

    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
#include <iostream>
using namespace std;

int main(){
    cout << "================================="<< endl;
    cout << "Pemograman Bahasa C++ Bintang Segitiga" << endl;
    cout << "================================="<< endl;
    
    int n;

    cout << "Masukan Tinggi segitiga: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
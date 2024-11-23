#include <iostream>
using namespace std;
int main () {
    cout << "================================="<< endl;
    cout << "Pemograman Bahasa C++ Bintang Segitiga Terbalik" << endl;
    cout << "================================="<< endl;    

    int n;

    cout << "Masukan tinggi segitiga terbalik: ";
    cin>> n;

    for (int i = n; i >= 1; i--){
        for(int j = 1 ; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

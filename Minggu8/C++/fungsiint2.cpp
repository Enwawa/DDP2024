#include <iostream>
using namespace std;

int faktorial(int n){
    if (n <= 1){
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout<< "Faktorial dari "<< angka<< " adalah "<< faktorial << endl;
    system("pause");
}
#include <iostream>
using namespace std;

int fibonaci(int n) {
    if (n <= 1) return n;
    return fibonaci(n - 1) + fibonaci(n - 2);
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Fibonaci dari " << angka << " adalah " << fibonaci(angka) << endl;
    return 0;
}

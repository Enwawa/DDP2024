#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;
    cout << "Fibonacci dari " << angka << " adalah " << fibonacci(angka) << endl;
    return 0;
}

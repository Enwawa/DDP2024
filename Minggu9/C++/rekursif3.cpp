#include <iostream>
using namespace std;

int pangkat(int x, int n) {
    if (n == 0) return 1;
    return x * pangkat(x, n - 1);
}

int main() {
    int x, n;
    cout << "Masukkan basis: ";
    cin >> x;
    cout << "Masukkan pangkat: ";
    cin >> n;
    cout << x << " pangkat " << n << " adalah " << pangkat(x, n) << endl;
    return 0;
}

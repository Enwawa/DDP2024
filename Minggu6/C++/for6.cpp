#include <iostream>
using namespace std;

int main() {
    int n, jumlah = 0;

    cout << "Masukkan batas atas bilangan genap: ";
    cin >> n;

    cout << "Bilangan genap antara 1 dan " << n << " adalah: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            jumlah += i;
        }
    }

    cout << "\nJumlah dari bilangan genap tersebut adalah: " << jumlah << endl;
    system("pause");
    return 0;
}

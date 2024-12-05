#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan ukuran tabel perkalian: ";
    cin >> n;

    int i = 1;
    do {
        int j = 1;
        do {
            cout << i * j << "\t";
            j++;
        } while (j <= n);
        cout << endl;
        i++;
    } while (i <= n);
}

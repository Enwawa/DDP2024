#include <iostream>
using namespace std;

int jumlah(int a, int b) {
    return a - b;
}

int main() {
    int hasil = jumlah(2, 3);
    cout << "Hasil pengurangan: " << hasil << endl;
    return 0;
}

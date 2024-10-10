#include <iostream>
#include <cmath>  // Untuk fungsi sqrt
using namespace std;

int main() {
    // Diketahui luas lingkaran
    double luas = 1384.74;
    double pi = 3.14159; // Nilai pi mendekati 3.14159
    double jari_jari;

    // Rumus mencari jari-jari: r = sqrt(luas / pi)
    jari_jari = sqrt(luas / pi); // Membagi luas dengan pi lalu mengambil akar kuadrat

    // Menampilkan hasil jari-jari
    cout << "Jari-jari lingkaran dengan luas 1384.74 adalah: " << jari_jari << endl;

    return 0;
}

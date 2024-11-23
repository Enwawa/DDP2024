#include <iostream>
using namespace std;

int main() {
    int pilihan;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "===============================\n";
        cout << "        MENU MAKANAN           \n";
        cout << "===============================\n";
        cout << "1. Nasi Goreng\n";
        cout << "2. Mie Ayam\n";
        cout << "3. Ayam Bakar\n";
        cout << "4. Soto Ayam\n";
        cout << "===============================\n";
        cout << "        MENU MINUMAN           \n";
        cout << "===============================\n";
        cout << "5. Teh Manis\n";
        cout << "6. Kopi\n";
        cout << "7. Jus Jeruk\n";
        cout << "8. Air Mineral\n";
        cout << "===============================\n";
        cout << "Pilih menu (1-8): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Anda memilih Nasi Goreng\n";
                break;
            case 2:
                cout << "Anda memilih Mie Ayam\n";
                break;
            case 3:
                cout << "Anda memilih Ayam Bakar\n";
                break;
            case 4:
                cout << "Anda memilih Soto Ayam\n";
                break;
            case 5:
                cout << "Anda memilih Teh Manis\n";
                break;
            case 6:
                cout << "Anda memilih Kopi\n";
                break;
            case 7:
                cout << "Anda memilih Jus Jeruk\n";
                break;
            case 8:
                cout << "Anda memilih Air Mineral\n";
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi.\n";
        }

        cout << "Apakah Anda ingin memilih lagi? (y/n): ";
        cin >> lanjut;
    }

    cout << "Terima kasih telah menggunakan menu kami!\n";
}

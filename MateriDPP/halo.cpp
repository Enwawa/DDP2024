#include <iostream>
using namespace std;

int main (){
    char pilihan;

    do {
        cout << "Halooo" << endl;
        cout << "Apakah ingin mengulang? (Y/N): ";
        cin >> pilihan;

        if (pilihan != 'y' && pilihan != 'n') {
            cout << "Salah input" << endl;
            cout << "Apakah mau di ulang lagi? (Y/N): ";
            cin >> pilihan;
        }
    }
    while (pilihan == 'y');
    
}
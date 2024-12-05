#include <iostream>
using namespace std;

int main(){

    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ If Else Opsi" << endl;
    cout << "================================="<< endl;

    int opsi;

    cout << "Pilih Opsi: ";
    cin>>opsi;


switch (opsi) {
    case 1:
        cout << "Start" << endl;
        break;
    case 2:
        cout << "Pause" << endl;
        break;
    case 3:
        cout << "Stop" << endl;
        break;
    case 4:
        cout << "Restart" << endl;
        break;
    default:
        cout << "Opsi tidak ditemukan" << endl;
    }
}
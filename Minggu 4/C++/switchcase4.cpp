#include <iostream>
using namespace std;

int main(){

    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ If Else Level" << endl;
    cout << "================================="<< endl;

    int level;

    cout << "Pilih level: ";
    cin>>level;


switch (level) {
    case 1:
        cout << "Pemula" << endl;
        break;
    case 2:
        cout << "Menengah" << endl;
        break;
    case 3:
        cout << "Senior" << endl;
        break;
    default:
        cout << "Level tidak ditemukan" << endl;
    }

}
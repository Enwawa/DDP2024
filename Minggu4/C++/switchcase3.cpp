#include <iostream>
using namespace std;

int main(){

    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ If Else Bulan" << endl;
    cout << "================================="<< endl;

    int bulan;

    cout << "Pilih bulan: ";
    cin>>bulan;


switch (bulan) {
    case 1:
        cout << "Januari" << endl;
        break;
    case 2:
        cout << "Februari" << endl;
        break;
    case 3:
        cout << "Maret" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "Mei" << endl;
        break;
    default:
        cout << "Bulan lainnya" << endl;
}
}
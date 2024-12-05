#include <iostream>
using namespace std;

int main(){

    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ Swith Case Huruf" << endl;
    cout << "================================="<< endl;

    char huruf;

    cout << "Huruf: ";
    cin>>huruf;


switch (huruf) {
    case 'a':
        cout << "Vokal" << endl;
        break;
    case 'e':
        cout << "Vokal" << endl;
        break;
    case 'i':
        cout << "Vokal" << endl;
        break;
    case 'o':
        cout << "Vokal" << endl;
        break;
    case 'u':
        cout << "Vokal" << endl;
        break;
    default:
        cout << "Konsonan" << endl;

    }
}
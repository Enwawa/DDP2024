#include <iostream>
using namespace std;

int main(){

    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ If Else Suhu" << endl;
    cout << "================================="<< endl;

    int suhu;

    cout << "Masukan Suhu: "<< "C";
    cin>>suhu;

    if (suhu > 34) {
        cout << "Panas" << endl;
    }
    else if (suhu >= 27) {
        cout << "Hangat" << endl;
    } 
    else {
        cout << "Dingin" << endl;
    }

}
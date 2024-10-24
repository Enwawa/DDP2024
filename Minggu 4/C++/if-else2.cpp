#include <iostream>
using namespace std;

int main(){
    cout << "==============================================="<< endl;
    cout << "Pemograman bahasa C++ If Else Positif Negatif" << endl;
    cout << "=============================================="<< endl;

    int angka;

    cout<< "masukan angka: ";
    cin>>angka;

    if(angka > 0){
        cout<< "Positif" << endl;
    }
    else if (angka < 0){
        cout<<"Negatif" << endl;
    }
    else{
        cout<<"Nol" << endl;
    }
}
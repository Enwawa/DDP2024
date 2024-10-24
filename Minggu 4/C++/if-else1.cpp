#include <iostream>
using namespace std;

int main(){
    cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ If Else Umur" << endl;
    cout << "================================="<< endl;
    int umur;

    cout<< "masukan umur: ";
    cin>>umur;

    if (umur >= 18) {
        cout<< "Dewasa" << endl;
    }
    else{
        cout<< "Di bawah umur" << endl;
    }
}
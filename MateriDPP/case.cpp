#include <iostream>
using namespace std;

int main (){

    int nilai;

    cout<<"Masukan nilai: ";
    cin>>nilai;

    switch (nilai)
    {
    case 85 ... 100:
        cout<<"Nilai A";
        break;
    case 70 ... 84:
        cout<<"Nilai B";
        break;
    case 55 ... 69:
        cout<<"Nilai C";
        break;
    case 40 ... 54:
        cout<<"Nilai D";
        break;
    case 0 ... 39:
        cout<<"Nilai E";
        break;
    
    default:
        cout << "Invalid input";
        break;
    }


}
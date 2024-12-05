#include <iostream>
using namespace std;

void tambahLima(int &nilai){
    nilai += 5;
}

int main (){
    int nilai;
    cout << "Masukan angka: ";
    cin >> nilai;
    tambahLima(nilai);
    cout << "Setelah ditambah lima: " << nilai << endl;
    system("pause");
}
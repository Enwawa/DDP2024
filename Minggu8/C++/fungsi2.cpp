#include <iostream>
using namespace std;

void cetakNama(string nama){
    cout << "Selamat pagi "<< nama << endl;
}

int main () {
    string nama;
    cout << "Masukan nama: ";
    cin>> nama;
    cetakNama(nama);

    system("pause");
}
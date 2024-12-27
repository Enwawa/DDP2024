#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    int usia;
    float ipk;
};

int main (){
    Mahasiswa mhs;
    mhs.nim = "A123";
    mhs.nama = "Agus";
    mhs.usia = 25;
    mhs.ipk = 3.98;

    cout<<"NIM: "<< mhs.nim << endl;
    cout<<"Nama: "<< mhs.nama << endl;
    cout<<"IPK: "<< mhs.ipk << endl;
}
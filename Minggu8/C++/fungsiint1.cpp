#include <iostream>
using namespace std;

int jumlah(int a, int b){
    return a + b;
}

int main (){
    int hasil = jumlah(3,4);
    cout << "Hasil pemjumlahan: "<< hasil<< endl;
    system("pause");
}
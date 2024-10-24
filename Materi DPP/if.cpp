#include <iostream>
using namespace std;

int main (){

    int nilai;

    cout << "Masukkan Nilai Anda : " ;
    cin>> nilai;

    if (nilai >= 85 && nilai <= 100){
        cout<<"Nilai anda A";
    }
    else if (nilai >= 70 && nilai < 85){
        cout<<"Nilai anda B";
    }
    else if (nilai >= 55 && nilai < 70){
        cout<<"Nilai anda C";
    }
    else if (nilai >= 40 && nilai < 55){
        cout<<"Nilai anda D";
    }
    else if (nilai >= 0 && nilai < 40){ 
        cout<<"GOBLOK";
    }
    else{
        cout << "Invalid input";
    }
}   
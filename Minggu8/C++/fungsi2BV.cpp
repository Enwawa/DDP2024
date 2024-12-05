#include <iostream>
#include <cmath>
using namespace std;

int pangkat(int a, int b){
    return pow(a,b);
}

int main(){
    int a , b;
    cout << "Masukkan angka: ";
    cin >> a;
    cout << "Masukkan pangkatnya: ";
    cin>> b;
    cout << "Hasil dari pangkat " << a << " dan "<< b << " adalah: "<<pangkat(a,b) << endl;
    system("pause");
}
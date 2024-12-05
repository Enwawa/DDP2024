#include <iostream>
using namespace std;

int main(){
cout << "================================="<< endl;
    cout << "Pemograman bahasa C++ If Else Ranking" << endl;
    cout << "================================="<< endl;
    char ranking;

    cout << "Masukan Ranking: ";
    cin >> ranking;

    if(ranking == 'A'){
        cout << "Sangat Bagus" << endl;
    }
    else if (ranking == 'B') {
        cout << "Bagus" << endl;
    }
    else if (ranking == 'C') {
        cout << "Cukup" << endl;
    }
    else {
    cout << "Buruk" << endl;
    }
}
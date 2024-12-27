#include <iostream>
using namespace std;

struct Orang {
    string nama;
    int umur;
};

int main() {
    Orang orang[3] = {{"Enwa", 18}, {"Fatih", 19}, {"Afiq", 20}};
    for (int i = 0; i < 3; i++) {
        cout << "Nama: " << orang[i].nama << ", Umur: " << orang[i].umur << endl;
    }
    return 0;
}

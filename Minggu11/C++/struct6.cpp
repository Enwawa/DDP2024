#include <iostream>
using namespace std;

struct Orang {
    string nama;
    int umur;

    void pekenalan() {
        cout << "Halo namaku " << nama << " dan umurku " << umur << " tahun." << endl;
    }
};

int main() {
    Orang p = {"Enwa", 18};
    p.pekenalan();
    return 0;
}

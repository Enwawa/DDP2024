#include <iostream>
using namespace std;

struct identitas {
    string nama;
    int umur;
};

int main() {
    identitas* p = new identitas;
    p->nama = "Stefenny";
    p->umur = 19;
    cout << "Nama: " << p->nama << ", Umur: " << p->umur << endl;
    delete p;
    return 0;
}

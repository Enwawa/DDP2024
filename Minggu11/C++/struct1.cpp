#include <iostream>
using namespace std;

struct Person {
    string nama;
    int umur;
};

int main() {
    Person p;
    p.nama = "Enwa";
    p.umur = 18;
    cout << "Nama: " << p.nama << ", Age: " << p.umur << endl;
    return 0;
}

#include <iostream>
using namespace std;

struct Person {
    string nama;
    int umur;

    Person(string n, int u) {
        nama = n;
        umur = u;
    }
};

int main() {
    Person p("Enwa", 20);
    cout << "Nama: " << p.nama << ", Umur: " << p.umur << endl;
    return 0;
}

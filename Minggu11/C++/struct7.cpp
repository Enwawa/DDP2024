#include <iostream>
#include <fstream>
using namespace std;

struct Person {
    string nama;
    int umur;
};

int main() {
    Person p;
    
    cout << "Enter nama: ";
    cin >> p.nama;
    cout << "Enter umur: ";
    cin >> p.umur;

    ofstream outFile("Nama.txt");
    outFile << p.nama << " " << p.umur << endl;
    outFile.close();

    ifstream inFile("Nama.txt");
    Person q;
    inFile >> q.nama >> q.umur;
    inFile.close();

    cout << "nama: " << q.nama << ", umur: " << q.umur << endl;

    return 0;
}

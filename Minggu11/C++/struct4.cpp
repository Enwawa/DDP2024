#include <iostream>
using namespace std;

struct Alamat
{
    string jalan;
    string kota;
};

struct Aku
{
    string nama;
    int umur;
    Alamat alamat;
};

int main()
{
    Aku p = {"Enwa", 18, {"Dongko-Kampak", "Trenggalek"}};
    cout << "Nama: " << p.nama << ", Umur: " << p.umur << endl;
    cout << "Alamat: " << p.alamat.jalan << ", " << p.alamat.kota << endl;
    return 0;
}

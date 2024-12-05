#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    bool jawab;

    
    int usiaAgus;
    int usiaBudi;
    int usiaCaca;


    cout << "Masukan usia Agus: ";
    cin >> usiaAgus;

    cout << "Masukan usia Budi: ";
    cin >> usiaBudi;

    cout << "Masukan usia Caca: ";
    cin >> usiaCaca;

    system("cls");

    jawab = usiaBudi > usiaCaca;
    cout << "jawab: " << (jawab ? "Bener" : "Salah") << endl;
    jawab = usiaCaca > usiaAgus;
    cout << "jawab: " << (jawab ? "Bener" : "Salah") << endl;
    jawab = usiaAgus > usiaBudi;
    cout << "jawab: " << (jawab ? "Bener" : "Salah") << endl;

    return 0;
}
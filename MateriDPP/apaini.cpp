#include <iostream>
using namespace std;

int main()
{

    int a = 2;
    int b = a;
    a -= a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    bool nilai;

    nilai = (!(a > b) && (a < b));
    cout << "Nilai= " << nilai << endl;
}
#include <iostream>
#include <string>
using namespace std;

void balikString(string &s, int start, int end) {
    if (start >= end) return;
    swap(s[start], s[end]);
    balikString(s, start + 1, end - 1);
}

int main() {
    string kata;
    cout << "Masukkan kata: ";
    cin >> kata;
    balikString(kata, 0, kata.length() - 1);
    cout << "Kata setelah dibalik: " << kata << endl;
    return 0;
}

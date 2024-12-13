#include <iostream>
#include <string>
using namespace std;

bool cekPalindrome(const string& s, int start, int end) {
    if (start >= end) return true;
    if (s[start] != s[end]) return false;
    return cekPalindrome(s, start + 1, end - 1);
}

int main() {
    string kata;
    cout << "Masukkan kata: ";
    cin >> kata;
    if (cekPalindrome(kata, 0, kata.length() - 1)) {
        cout << kata << " adalah palindrome." << endl;
    } else {
        cout << kata << " bukan palindrome." << endl;
    }
    return 0;
}

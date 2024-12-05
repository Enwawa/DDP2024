#include <iostream>
using namespace std;

int main() {
    char jawaban;
    char lanjut = 'y';

    while (lanjut == 'y' || lanjut == 'Y') {
        cout << "===============================\n";
        cout << "         PILIHAN GANDA         \n";
        cout << "===============================\n";

        cout << "1. Apa ibu kota Indonesia?\n";
        cout << "   a. Jakarta\n";
        cout << "   b. Surabaya\n";
        cout << "   c. Bandung\n";
        cout << "   d. Medan\n";
        cout << "Pilih jawaban (a/b/c/d): ";
        cin >> jawaban;

        if (jawaban == 'a' || jawaban == 'A') {
            cout << "Benar! Ibu kota Indonesia adalah Jakarta.\n";
        } else {
            cout << "Salah. Ibu kota Indonesia adalah Jakarta.\n";
        }

        cout << "===============================\n";
        cout << "         PILIHAN GANDA         \n";
        cout << "===============================\n";
        
        cout << "2. Siapa presiden pertama Indonesia?\n";
        cout << "   a. Soekarno\n";
        cout << "   b. Suharto\n";
        cout << "   c. Habibie\n";
        cout << "   d. Megawati\n";
        cout << "Pilih jawaban (a/b/c/d): ";
        cin >> jawaban;

        if (jawaban == 'a' || jawaban == 'A') {
            cout << "Benar! Presiden pertama Indonesia adalah Soekarno.\n";
        } else {
            cout << "Salah. Presiden pertama Indonesia adalah Soekarno.\n";
        }

        cout << "Ingin melanjutkan ke pertanyaan berikutnya? (y/n): ";
        cin >> lanjut;
    }

    cout << "Terima kasih telah mengikuti kuis ini!\n"; 
    system("pause");
}
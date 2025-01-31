#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int scores[5];
    float average;
};

int main() {
    Student students[3];

    // Input data untuk 3 mahasiswa
    for (int i = 0; i < 3; i++) {
        cout << "Masukkan nama mahasiswa ke-" << (i + 1) << ": ";
        cin >> students[i].name;

        int total = 0;
        cout << "Masukkan 5 nilai tugas:\n";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].scores[j];
            total += students[i].scores[j]; // Hitung total nilai
        }
        students[i].average = total / 5.0; // Hitung rata-rata
    }

    // Output data mahasiswa
    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Nama: " << students[i].name << endl;
        cout << "Nilai Tugas: ";
        for (int j = 0; j < 5; j++) {
            cout << students[i].scores[j] << " ";
        }
        cout << "\nRata-rata Nilai: " << students[i].average << "\n\n";
    }

    return 0;
}


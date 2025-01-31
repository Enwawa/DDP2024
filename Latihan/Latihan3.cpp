#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
	string nama;
	int nilai[5];
	fload rataNilai;
	int nilaiMax;
	
};

int nilaiMax(int arr[], n){
	
}

int main(){
	mahasiswa mhs[3];
	
	for(int i = 0; i < 3; i++){
		cout << "Masukkan nama Mahasiswa ke-" << (i + 1) << ":"<< endl;
		cin << msh[i].nama;
	}
	
	int totalNilai = 0;
	cout << "Masukan nilai tugas untuk "<< mhs[i].nama <<":\n";
	for(int j = 0; j < 5; j++){
		cout <<"Nilai tugas ke-" << (j + 1) << ": ";
		cin >> mhs[i].nilai[j];
		totalNilai += mhs[i].nilai[j];
	}
}


#include<iostream>
#include<string>
using namespace std;

struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){
	buah apel;
	buah jeruk;
	 
	apel.warna = " merah";
	apel.berat = 250.50f;
	apel.harga = 50000;
	apel.rasa = "manis kesat";
	
	jeruk.warna = " orange";
	jeruk.berat = 250.50f;
	jeruk.berat = 20000;
	jeruk.rasa = "asam";
	
	cout<<"-"<< apel.warna<<endl;
	cout << "-"<< apel.berat<<endl;
	cout<< "-"<< apel.rasa<<endl;
	
	cout<<"-"<< jeruk.warna<<endl;
	cout << "-"<< jeruk.berat<<endl;
	cout<< "-"<< jeruk.rasa<<endl;
	
	
	cin.get();
	return 0;
}


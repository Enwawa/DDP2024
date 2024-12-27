#include<iostream>
#include<string>
using namespace std;

struct barang {
    int id;
    string nama;
    float harga;
    int jumlah;
};

void isiData(barang* b, int id, string nama, float harga, int jumlah){
    b->id = id;
    b->nama = nama;
    b->harga = harga;
    b->jumlah = jumlah;
}

void tampilkanData(const barang* b){
    cout << " ID Barang     : " << b->id << endl;
    cout << " Nama Barang   : " << b->nama << endl;
    cout << " Harga Barang  : " << b->harga << endl;
    cout << " Jumlah Barang : " << b->jumlah << endl;
}

float hitungTotalHarga(const barang* b, int jumlah){
    float total = 0;
    for (int i = 0; i < jumlah; i++){ 
        total += b[i].harga * b[i].jumlah;
    }
    return total;
}

int main(){
    int jumlahBarang;
    cout << " Masukan Jumlah Barang : ";
    cin >> jumlahBarang;
    
    barang* daftarBarang = new barang[jumlahBarang];
    
    for (int i = 0; i < jumlahBarang; i++) {
        int id, jumlah;
        string nama;
        float harga;
        
        cout << "Masukan Data barang ke-" << i + 1 << endl;
        cout << "ID : ";
        cin >> id;  
        cout << "Nama : "; 
        cin.ignore();  
        getline(cin, nama); 
        cout << "Harga: ";
        cin >> harga;
        cout << "Jumlah: "; 
        cin >> jumlah;
        
        isiData(&daftarBarang[i], id, nama, harga, jumlah); 
        cout << "==============================================\n";
    }
    
    cout << "\n\tData Barang" << endl;
    for (int i = 0; i < jumlahBarang; i++) {
        tampilkanData(&daftarBarang[i]); 
        cout << "================================================\n";
    }     

    float totalHarga = hitungTotalHarga(daftarBarang, jumlahBarang); 
    cout << " Total Harga Semua Barang: Rp. " << totalHarga << endl;
    
    delete[] daftarBarang;  
    return 0;
}

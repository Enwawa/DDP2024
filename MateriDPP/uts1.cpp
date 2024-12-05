#include <iostream>
using namespace std;

int main (){
    int channel, kulitas;
    string ch , k;

        cout << "Daftara Channel televisi yang ada di kota A" << endl;
        cout<<"1. RCTI\n"<<"2. SCTV\n"<<"3. Indosiar\n"<<"4. TransTV\n"<<"5. ANTV\n";
        cout << "Masukkan channel : ";
        cin >> channel;
        cout << "\n";
        cout << "Daftar kualitas channel telivisi :\n";
        cout << "1. SD\n2. HD\n3. UHD\n4. 4K\n";
	    cout << "Masukkan kualitas channel : ";
        cin >> kulitas;

        switch (channel) {
            case 1: 
            cout << "Anda memilih channel: RCTI\n";
            ch = "RCTI";
            break;
            case 2:
            cout << "Anda memilih channel: SCTV\n";
            ch = "SCTV";
            break;
            case 3:
            cout << "Anda memilih channel: Indosiar\n";
            ch = "Indosiar";
            break;
            case 4:
            cout << "Anda memilih channel: Trans TV\n";
            ch = "Trans TV";
            break;
            case 5:
            cout << "Anda memilih channel: ANTV\n";
            ch = "ANTV";
            break;
            default:
            cout << "Pilihan tidak valid\n";
        }

        switch (kulitas)
        {
        case 1:
            cout << "Anda memilih kualias: SD\n";
            k = "SD";
            break;
        case 2:
            cout << "Anda memilih kualias: HD\n";
            k = "HD";
            break;
        case 3:
            cout << "Anda memilih kualias: UHD\n";
            k = "UHD";
            break;
        case 4:
            cout << "Anda memilih kualias: 4K\n";
            k = "4K";
            break;
        
        default:
            cout << "Pilihan tidak valid\n";
            break;
        }
    cout<<"Anda memilih channel "<< ch <<" dengan kualitas "<< k;
}
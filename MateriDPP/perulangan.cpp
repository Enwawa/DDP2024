#include <iostream>
using namespace std;

int main(){
    // int baris = 9;
    // int kolom = 5;

    // for(int i = 1; i <= baris ; i++){
    //     for (int j = i; j < i + kolom; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    int baris = 5;
    int kolom = 5;
    int i=1;

    // while (i <= baris){
    //     int j = i;
    //     int count = 0;

    //     while (count < kolom)
    //     {
    //         cout << j << " ";
    //         j++;
    //         count++;
    //     }
    //     cout << endl;
    //     i++;
    // } 

    do{
        int j = i;
        do{
            cout << j << " ";
            j++;
        } while (j < i + kolom);
        cout << endl;
        i++;

    } while (i <= baris);
    
}
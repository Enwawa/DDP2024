#include <iostream>
using namespace std;

int findMax(int arr[], int n){
	int maxVal = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > maxVal){
			maxVal = arr[i];
		}
	}
	return maxVal;
}


int main(){
	int n;
	cout << "Masukan Value: ";
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << "Masukan Nilai ke- "<<(i + 1) << ": ";
		cin >> arr[i];
	}
	
	int maxVal = findMax(arr, n);
	cout << "nilai maximum adalah: "<< maxVal << endl;
	return 0;
}

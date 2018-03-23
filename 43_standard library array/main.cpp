#include <iostream>
#include <array>

using namespace std;


int main(){

	// membuat array dengan menggunakan standard library
	// array<int, jumlah array> nama array

	array < int, 5 > nilai;

	for(int i = 0; i <= 4 ; i++){
		nilai[i] = i;
		cout << "nilai [" << i << "] = " << nilai[i];
		cout << " address : " << &nilai[i] << endl;
	}

	cout << endl;
	// ukuran array
	cout << "ukuran : " << nilai.size() << endl;
	// address awal dari array
	cout << "address awal : " << nilai.begin() << endl;
	// address akhir dari array
	cout << "address akhir : " << nilai.end() << endl;
	// nilai dengan index
	cout << "nilai ke 2 : " << nilai.at(2) << endl;

	cin.get();
	return 0;
}

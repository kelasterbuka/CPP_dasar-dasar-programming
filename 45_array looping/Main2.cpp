#include <iostream>
#include <array>

using namespace std;

int main(){

	// looping untuk array di c++11 keatas
	/*
		for(declarasi variabel : array){
			statemen
		}
	*/

	array <int, 10> arrayNilai = {0,1,2,3,4,5,6,7,8,9};

	for(int nilai : arrayNilai){
		cout << "address " << &nilai << " nilainya: " << nilai << endl;
		nilai = 1; // tidak merubah array
	}

	cout << endl;
	// memanipulasi array dengan menggunakan referensi
	for(int &nilaiRef : arrayNilai){
		nilaiRef *= 2;
	}

	cout << endl;

	for(int &nilaiRef : arrayNilai){
		cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
	}

	cin.get();
	return 0;
}

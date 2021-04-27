/*
	Pengenalan Fungsi Rekursif
*/
#include <iostream>

using namespace std;

// Fungsi pengulangan
int pangkatiterasi(int a, int b){
	int hasil = a;
	for(int i = 1; i < b; i++){
		hasil = hasil * a;
	}
	return hasil;
}

// Fungsi rekursif sederhana
int pangkatrekursif(int a,int b){
	if (b <= 1){
		cout << "Akhir dari rekursif\n";
		return a;
	}
	else{
		cout << "Rekursif\n";
		return a * pangkatrekursif(a, (b - 1));
	}
}

int main(int argc, char** argv){
	int a, b;

	cout << "Angka: ";
	cin >> a;
	cout << "Pangkat: ";
	cin >> b;
	cout << "Hasil iterasi = " << pangkatiterasi(a, b) << endl;
	cout << "Hasil rekursif = " << pangkatrekursif(a, b) << endl;

	return 0;
}

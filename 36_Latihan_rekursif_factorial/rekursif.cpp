#include <iostream>
using namespace std;

// Fungsi Prototype
int faktorial(int n);

int main(int argc, char** argv){

	int angka, hasil;
	cout << "Menghitung faktorial dari: ";
	cin >> angka;

	hasil = faktorial(angka);
	cout << "\nnilai faktorialnya adalah: " << hasil << endl;

	return 0;
}

int faktorial(int n){
	if (n <= 1){
		cout << n;
		return n;
	}else{
		cout << n << "*";
		return n * faktorial(n - 1);
	}
}

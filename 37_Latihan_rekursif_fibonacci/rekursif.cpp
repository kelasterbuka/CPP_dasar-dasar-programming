#include <iostream>
using namespace std;

// Fungsi Prototype
long fibonacci(long n);

int main(int argc, char** argv){
	
	long angka,hasil;
	cout << "Menghitung fibonacci ke: " << endl;
	cin >> angka;
	hasil = fibonacci(angka);

	cout << "Nilainya adalah : ";
	cout << hasil << endl;

	return 0;
}

long fibonacci(long n){
	cout << "Fibonacci ke " << n << endl;
	if((n == 0)||(n == 1)){
		return n;
	}else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
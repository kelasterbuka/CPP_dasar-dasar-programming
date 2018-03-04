#include <iostream>
using namespace std;

long fibonacci(long n);

int main(){
	
	long angka,hasil;
	cout << "menghitung fibonacci ke : " << endl;
	cin >> angka;
	hasil = fibonacci(angka);

	cout << "nilainya adalah : ";
	cout << hasil << endl;
	cin.get();	
	return 0;
}

long fibonacci(long n){
	cout << "fibonacci ke " << n << endl;
	if((n == 0)||(n == 1)){
		return n;
	}else{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
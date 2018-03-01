#include <iostream>
using namespace std;

// prototype
double hitung_luas(double p, double l);
void println(double x);

int main()
{
	double panjang,lebar,luas;
	cin >> panjang;
	cin >> lebar;

	luas = hitung_luas(panjang,lebar);
	
	println(luas);

	cin.get();

	return 0;
}

double hitung_luas(double p, double l){
	return p * l;
}

void println(double x){
	cout << "hasil : " <<  x << endl;
}


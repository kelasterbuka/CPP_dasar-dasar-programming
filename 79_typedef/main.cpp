#include <iostream>

using namespace std;

int main(){

	// typedef adalah memberikan alias untuk tipedata

	typedef int I;
	typedef int iVector2D[2];
	typedef unsigned long ulong;
	typedef double vector[2];

	using numbers = double;

	I a = 10;
	iVector2D b = {1,2};
	ulong c = 1208736108726308;
	vector d = {10.980,15.123};
	numbers e = 10.212312;

	cout << "nilai a: " << a << endl;
	cout << "nilai b: " << b[0] << " dan " << b[1] << endl;
	cout << "nilai c: " << c << endl;
	cout << "nilai d: " << d[0] << " dan " << d[1] << endl;
	cout << "nilai e: " << e << endl;
	cin.get();
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int a = 3;
	int b = 2;

	bool hasil; 

	// operator logika : not, and, or

	// not
	hasil = !(a == 3);

	// and : kedua nilai benar untuk menghasilkan true

	cout << "untuk and \n";
	hasil = (a == 3) and (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) and (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) && (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) && (b == 3); // false and false
	cout << hasil << endl;

	// or : salah satu nilai true maka hasil true
	cout << "untuk or \n";
	hasil = (a == 3) or (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) or (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) || (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) || (b == 3); // false and false
	cout << hasil << endl;


	cin.get();
	return 0;
}

#include <iostream>

using namespace std;

int main(){

	int a;

	cout << "Masukan angka: ";
	cin >> a;

	if (a == 5){
		cout << "Nilai ini adalah " << a << endl;
	} else if (a == 3){
		cout << "Nilai ini adalah " << a << endl;
	} else if (a == 1){
		cout << "Nilai ini adalah " << a << endl;
	} else {
		cout << "Bukan 5, 3, atau 1" << endl;
	}

	cout << "Selesai" << endl;
	
	return 0;
}

#include <iostream>
using namespace std;

// fungsi prototipe
double volume_kubus(double p = 1, double l = 1, double t = 1);

int main(){

	cout << " volume kubus: " << volume_kubus(3,4,5) << endl;
	cout << " volume kubus: " << volume_kubus(3,4) << endl;
	cout << " volume kubus: " << volume_kubus(3) << endl;
	cout << " volume kubus: " << volume_kubus() << endl;
	cin.get();
	return 0;
}

// default argument atau nilai standarnya
double volume_kubus(double p, double l, double t){
	return p * l * t;
}
#include <iostream>
#include "library.h"
#include <string>

#define PI 3.14159265359

using namespace std;

int main(){
	cout << "berhasil" << endl;

	cout << "PI : " << PI << endl;
	cout << "KUADRAT: " << KUADRAT(5) << endl;
	cout << "MAX: " << MAX(10,2) << endl;
	cout << "data string: " << data << endl;
	cin.get();
	return 0;
}
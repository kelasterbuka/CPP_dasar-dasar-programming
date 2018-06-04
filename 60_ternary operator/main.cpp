#include <iostream>
#include <string>

using namespace std;

// ternary operator = ?
// kondisi ? hasil1 : hasil2


int main(){

	int a,b;
	string hasil1,hasil2,output;

	hasil1 = "otong";
	hasil2 = "ucup";

	a = 5;

	cout << "masukan angka? " ;
	cin >> b;

	output = (a < b) ? hasil1 : hasil2 ;

	// if (a < b){
	// 	output = hasil1;
	// }else{
	// 	output = hasil2;
	// }

	cout << output << endl;

	cin.get();
	return 0;
}










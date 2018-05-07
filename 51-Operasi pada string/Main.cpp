#include <iostream>
#include <string>

using namespace std;

int main(){

	string kata("cat");

	// menampilkan data string
	cout << kata << endl;

	// mengambil karakter berdasarkan index
	cout << "index ke 0 : " << kata[0] << endl;
	cout << "index ke 1 : " << kata[1] << endl;
	cout << "index ke 2 : " << kata[2] << endl;

	// merubah karakter pada index
	kata[1] = 'e';
	cout << kata << endl;

	// menyambung, concatenation
	string kata2(kata + "ar");
	cout << kata2 << endl;

	string kata3("membahana");
	kata2.append(" " + kata3);
	cout << kata2 << endl;

	string kata4("ahay!!!!!!");
	kata2 += " " + kata4;
	cout << kata2 << endl;

	cin.get();
	return 0;
}













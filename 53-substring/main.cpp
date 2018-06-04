#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string kalimat_1("Dayat suka olahraga supaya sehat");
	string kalimat_2("Ucup suka makan pisang di pagi hari");

	cout << "1: " << kalimat_1 << endl;
	cout << "2: " << kalimat_2 << endl;

	// substring, mengambil string di tengah-tengah
	// substr(index,panjang)
	cout << kalimat_1.substr(11,8) << " ";
	cout << kalimat_2.substr(16,6) << endl;


	// mencari posisi dari substring
	cout << "posisi olahraga : ";
	cout << kalimat_1.find("olahraga") << endl;
	cout << "posisi pisang : " ;
	cout << kalimat_2.find("pisang") << endl;

	int a = kalimat_1.find("a");
	cout << a << endl;
	cout << kalimat_1.find("a", a + 1) << endl;

	// mencari posisinya dari belakang -> rfind

	cout << kalimat_2.rfind("i") << endl;


	cin.get();
	return 0;
}

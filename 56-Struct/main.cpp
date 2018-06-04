#include <iostream>
#include <string>

using namespace std;

// Struct: data yang dibentuk 
// oleh beberapa data

struct buah{
	string warna;
	float berat;
	int harga;
	string rasa;
};

int main(){

	buah apel;
	buah jeruk;

	apel.warna = "merah";
	apel.berat = 250.50f;
	apel.harga = 50000;
	apel.rasa = "manis kesat";

	jeruk.warna = "orange";
	jeruk.berat = 150.0f;
	jeruk.harga = 20000;
	jeruk.rasa = "asam";

	cout << " apel " << endl;
	cout << "-" << apel.warna << endl;
	cout << "-" << apel.berat << endl;
	cout << "-" << apel.harga << endl;
	cout << "-" << apel.rasa << endl;

	cout << " jeruk " << endl;
	cout << "-" << jeruk.warna << endl;
	cout << "-" << jeruk.berat << endl;
	cout << "-" << jeruk.harga << endl;
	cout << "-" << jeruk.rasa << endl;

	cin.get();
	return 0;
}










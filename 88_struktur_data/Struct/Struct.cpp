#include <iostream>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Mahasiswa{
	string nim;
	string nama;
	float ipk;
};

int main(int argc, char** argv) {
	Mahasiswa mhs;
	mhs.nim = "170010222";
	mhs.nama = "Wayan";
	mhs.ipk = 3.5;
	
	Mahasiswa mhs2;
	mhs2.nim = "170010223";
	mhs2.nama = "Made";
	mhs2.ipk = 2.5;
	
	Mahasiswa array_of_mhs[2];
	array_of_mhs[0].nim = "170010224";
	array_of_mhs[0].nama = "Gede";
	array_of_mhs[0].ipk = 3.75;
	
	array_of_mhs[1].nim = "170010225";
	array_of_mhs[1].nama = "Kadek";
	array_of_mhs[1].ipk = 2.75;
	
	for (int i=0; i<2; i++){
		cout << array_of_mhs[i].nim << " " 
		<< array_of_mhs[i].nama << " " 
		<< array_of_mhs[i].ipk << endl;
	}
	
	cout << mhs.nim << " " << mhs.nama << " " << mhs.ipk << endl;
	cout << mhs2.nim << " " << mhs2.nama << " " << mhs2.ipk;
	
	
	// Pointer
	int numbers[5] = {6, 7, 8, 9, 10};
	int *p;
	p = numbers;
	*p = 10;
	cout << p << endl;
	cout << *p << endl;
	
	p++;
	*p = 20;
	cout << p << endl;
	cout << *p << endl;
	
	cout << "------------------------" << endl;
	p = &numbers[2];
	*p = 30;
	cout << p << endl;
	cout << *p << endl;
	
	p = numbers + 3;
	*p = 40;
	cout << p << endl;
	cout << *p << endl;
	
	p = numbers;
	*(p+4) = 50;
	cout << p << endl;
	cout << *p << endl;
	
	
	return 0;
}
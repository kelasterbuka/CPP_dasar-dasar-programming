#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
	int NIM;
	string nama;
	string jurusan;
};

Mahasiswa ambilData(int posisi, fstream &myFile){
	Mahasiswa bufferData;

	myFile.seekp((posisi-1)*sizeof(Mahasiswa));
	myFile.read(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));

	return bufferData;
}

void menulisData(Mahasiswa &data, fstream &myFile){
	myFile.write(reinterpret_cast<char*>(&data),sizeof(Mahasiswa));
}

void menulisDataByPos(int posisi,Mahasiswa &bufferData ,fstream &myFile){
	myFile.seekg((posisi-1)*sizeof(Mahasiswa));
	myFile.write(reinterpret_cast<char*>(&bufferData),sizeof(Mahasiswa));
}

int main(){
	fstream myFile;
	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

	Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3, output;

	mahasiswa1.NIM = 123;
	mahasiswa1.nama = "ucup";
	mahasiswa1.jurusan = "memasak";

	mahasiswa2.NIM = 124;
	mahasiswa2.nama = "otong";
	mahasiswa2.jurusan = "menjahit";

	mahasiswa3.NIM = 125;
	mahasiswa3.nama = "sandra";
	mahasiswa3.jurusan = "mesin";

	menulisData(mahasiswa1,myFile);
	menulisData(mahasiswa2,myFile);
	menulisData(mahasiswa3,myFile);

	mahasiswa2.nama = "mario";
	menulisDataByPos(2,mahasiswa2,myFile);
	
	output = ambilData(2,myFile);

	cout << output.NIM << endl;
	cout << output.nama << endl;
	cout << output.jurusan << endl;

	myFile.close();
	cin.get();
	return 0;
}









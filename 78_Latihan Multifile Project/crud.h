#include <fstream>
#include <string>

namespace crud {
	struct Mahasiswa {
		int pk;
		std::string NIM;
		std::string nama;
		std::string jurusan;
	};

	int getOption();
	void checkDatabase(std::fstream &data);
	void writeData(std::fstream &data, int posisi, Mahasiswa &inputMahasiswa);
	int getDataSize(std::fstream &data);
	Mahasiswa readData(std::fstream &data, int posisi);
	void addDataMahasiswa(std::fstream &data);
	void displayDataMahasiswa(std::fstream &data);
	void updateRecord(std::fstream &data);
	void deleteRecord(std::fstream &data);
}
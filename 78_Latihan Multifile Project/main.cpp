#include <iostream>
#include <fstream>
#include <string>
#include "crud.h"


int main(){

	std::fstream data;
	
	crud::checkDatabase(data);

	int pilihan = crud::getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

	while(pilihan != FINISH){
		
		switch(pilihan){
			case CREATE:
				std::cout << "Menambah data mahasiswa" << std::endl;
				crud::addDataMahasiswa(data);
				break;
			case READ:
				std::cout << "Tampilkan data mahasiswa" << std::endl;
				crud::displayDataMahasiswa(data);
				break;
			case UPDATE:
				std::cout << "Ubah data mahasiswa" << std::endl;
				crud::displayDataMahasiswa(data);
				crud::updateRecord(data);
				crud::displayDataMahasiswa(data);
				break;
			case DELETE:
				std::cout << "Hapus data mahasiswa" << std::endl;
				crud::displayDataMahasiswa(data);
				crud::deleteRecord(data);
				crud::displayDataMahasiswa(data);
				break;
			default:
				std::cout << "Pilihan tidak ditemukan" << std::endl;
				break;
		}

		label_continue:

		std::cout << "Lanjutkan?(y/n) : ";
		std::cin >> is_continue;
		if ( (is_continue == 'y') | (is_continue == 'Y')){
			pilihan = crud::getOption();
		} else if ((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}
	}

	std::cout << "akhir dari program" << std::endl;

	std::cin.get();
	return 0;
}
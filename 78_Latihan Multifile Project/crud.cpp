#include <iostream>
#include <fstream>
#include <string>
#include "crud.h"

void crud::writeData(std::fstream &data, int posisi, crud::Mahasiswa &inputMahasiswa){
		data.seekp((posisi - 1)*sizeof(crud::Mahasiswa), std::ios::beg);
		data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(crud::Mahasiswa));
	}

crud::Mahasiswa crud::readData(std::fstream &data, int posisi){
	crud::Mahasiswa readMahasiswa;
	data.seekg((posisi - 1)*sizeof(Mahasiswa),std::ios::beg);
	data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(crud::Mahasiswa));
	return readMahasiswa;
}

int crud::getDataSize(std::fstream &data){
	int start, end;
	data.seekg(0,std::ios::beg);
	start = data.tellg();
	data.seekg(0,std::ios::end);
	end = data.tellg();
	return (end-start)/sizeof(crud::Mahasiswa);
}

void crud::displayDataMahasiswa(std::fstream &data){
	int size = crud::getDataSize(data);
	crud::Mahasiswa showMahasiswa;
	std::cout << "no.\tpk.\tNIM.\tNama.\tJurusan." << std::endl;
	for(int i = 1; i <= size; i++){
		showMahasiswa = crud::readData(data,i);
		std::cout << i << "\t";
		std::cout << showMahasiswa.pk << "\t";
		std::cout << showMahasiswa.NIM << "\t";
		std::cout << showMahasiswa.nama << "\t";
		std::cout << showMahasiswa.jurusan << std::endl;
	}
}

void crud::deleteRecord(std::fstream &data){
	int nomor,size,offset;
	crud::Mahasiswa blankMahasiswa, tempMahasiswa;
	std::fstream dataSementara;

	size = crud::getDataSize(data);
	// 1. pilih nomor
	std::cout << "Hapus nomor: ";
	std::cin >> nomor;
	// 2. di posisi ini diisi dengan data kosong
	crud::writeData(data,nomor,blankMahasiswa);
	// 3. kita cek data yang ada dari file data.bin, kalau ada data
	//    kita pindahkan ke file sementara
	dataSementara.open("temp.dat", std::ios::trunc|std::ios::out|std::ios::in|std::ios::binary);

	offset = 0;

	for (int i=1 ; i <=size ; i++){
		tempMahasiswa = crud::readData(data,i);

		if (!tempMahasiswa.nama.empty()){
			crud::writeData(dataSementara,i - offset,tempMahasiswa);
		} else {
			offset++;
			std::cout << "deleted item" << std::endl;
		}
	}
	// 4. kita pindahkan data dari file sementara ke data.bin
	size = crud::getDataSize(dataSementara);
	data.close();
	data.open("data.bin",std::ios::trunc|std::ios::out|std::ios::binary);
	data.close();
	data.open("data.bin",std::ios::out|std::ios::in|std::ios::binary);

	for(int i = 1; i <= size; i++){
		tempMahasiswa = crud::readData(dataSementara,i);
		crud::writeData(data,i,tempMahasiswa);
	}
}

void crud::updateRecord(std::fstream &data){
	int nomor;
	crud::Mahasiswa updateMahasiswa;
	std::cout << "pilih no: ";
	std::cin >> nomor;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

	updateMahasiswa = crud::readData(data,nomor);
	
	std::cout << "\n\npilihan data: " << std::endl;
	std::cout << "NIM : " << updateMahasiswa.NIM << std::endl;
	std::cout << "nama : " << updateMahasiswa.nama << std::endl;
	std::cout << "jurusan : " << updateMahasiswa.jurusan << std::endl;

	std::cout << "\nMerubah data: "<< std::endl;
	std::cout << "NIM:";
	std::getline(std::cin,updateMahasiswa.NIM);
	std::cout << "nama:";
	std::getline(std::cin,updateMahasiswa.nama);
	std::cout << "jurusan:";
	std::getline(std::cin,updateMahasiswa.jurusan);

	crud::writeData(data,nomor,updateMahasiswa);
}

void crud::checkDatabase(std::fstream &data){
	data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

	// check file ada atau tidak
	if (data.is_open()){
		std::cout << "database ditemukan" << std::endl;
	} else {
		std::cout << "database tidak ditemukan, buat database baru" << std::endl;
		data.close();
		data.open("data.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
	}
}

int crud::getOption(){
	int input;
	std::system("clear");
	// system("cls");
	std::cout << "\nPROJECT CRUD MULTIFILE" << std::endl;
	std::cout << "Program CRUD data mahasiswa" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "1. Tambah data mahasiswa" << std::endl;
	std::cout << "2. Tampilkan data mahasiswa" << std::endl;
	std::cout << "3. Ubah data mahasiswa" << std::endl;
	std::cout << "4. Hapus data mahasiswa" << std::endl;
	std::cout << "5. Selesai" << std::endl;
	std::cout << "=============================" << std::endl;
	std::cout << "pilih [1-5]? : ";
	std::cin >> input;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	return input;
}

void crud::addDataMahasiswa(std::fstream &data){
	
	crud::Mahasiswa inputMahasiswa, lastMahasiswa;

	int size = crud::getDataSize(data);
	
	std::cout << "ukuran data : " << size << std::endl;

	if(size == 0){
		inputMahasiswa.pk = 1;
	} else {
		lastMahasiswa = crud::readData(data,size);
		std::cout << "pk = " << lastMahasiswa.pk << std::endl;
		inputMahasiswa.pk = lastMahasiswa.pk + 1;
	}

	std::cout << "Nama: ";
	std::getline(std::cin, inputMahasiswa.nama);
	std::cout << "Jurusan: ";
	std::getline(std::cin, inputMahasiswa.jurusan);
	std::cout << "NIM: ";
	std::getline(std::cin, inputMahasiswa.NIM);

	crud::writeData(data,size+1,inputMahasiswa);
}
#include <iostream>
#include <string>

using namespace std;


int getOption();

int main(){

	int pilihan = getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};


	while(pilihan != FINISH){
		
		switch(pilihan){
			case CREATE:
				cout << "Menambah data mahasiswa" << endl;
				break;
			case READ:
				cout << "Tampilkan data mahasiswa" << endl;
				break;
			case UPDATE:
				cout << "Ubah data mahasiswa" << endl;
				break;
			case DELETE:
				cout << "Hapus data mahasiswa" << endl;
				break;
			default:
				cout << "Pilihan tidak ditemukan" << endl;
				break;
		}

		label_continue:

		cout << "Lanjutkan?(y/n) : ";
		cin >> is_continue;
		if ( (is_continue == 'y') | (is_continue == 'Y')){
			pilihan = getOption();
		} else if ((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}

	}

	cout << "akhir dari program" << endl;

	cin.get();
	return 0;
}

int getOption(){
	int input;
	system("clear");
	// system("cls");
	cout << "\nProgram CRUD data mahasiswa" << endl;
	cout << "=============================" << endl;
	cout << "1. Tambah data mahasiswa" << endl;
	cout << "2. Tampilkan data mahasiswa" << endl;
	cout << "3. Ubah data mahasiswa" << endl;
	cout << "4. Hapus data mahasiswa" << endl;
	cout << "5. Selesai" << endl;
	cout << "=============================" << endl;
	cout << "pilih [1-5]? : ";
	cin >> input;
	return input;
}













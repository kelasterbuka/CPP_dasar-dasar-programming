#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct TNode{
	int data;
	TNode *next;
};

TNode *head;

void Inisialisasi(){
	head = NULL;
}

int isEmpty(){
	if(head == NULL){
		return 1;
	}
	else{
		return 0;
	}
		
}

void insertDepan(int databaru){
	TNode *baru;
	baru = new TNode;
	baru->data = databaru;
	baru->next = NULL;
	
	if(isEmpty() == 1){
		head = baru;
		head->next = NULL;
	}
	else{
		baru->next = head;
		head = baru;
	}
	cout << "Data masuk! \n";	
}

void insertBelakang(int databaru){
	TNode *baru, *temp;
	baru = new TNode;
	baru->data = databaru;
	baru->next = NULL;
	
	if(isEmpty() == 1){
		head = baru;
		head->next = NULL;
	}
	else{
		temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = baru;
	}
	cout << "Data masuk! \n";
}

void tampil(){
	TNode *temp;
	temp = head;
	
	if(isEmpty() == 0){
		cout << "Isi dari list: ";
		while(temp != NULL){			
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
	else{
		cout << "List masih kosong!\n";
	}
}

void hapusDepan(){
	TNode *hapus;
	int del;
	
	if(isEmpty() == 0){
		if(head->next != NULL){
			hapus = head;
			del = hapus->data;
			head = head->next;
			delete hapus;
		}
		else{
			del = head->data;
			head = NULL;
		}
		cout << del << " sudah dihapus.\n";	
	}
	else{
		cout << "List masih kosong!\n";
	}
}

void hapusBelakang(){
	TNode *hapus, *temp;
	int del;
	
	if(isEmpty() == 0){
		if(head->next != NULL){
			temp = head;
			while(temp->next->next != NULL){
				temp = temp->next;
			}
			hapus = temp->next;
			del = hapus->data;
			temp->next = NULL;
			delete hapus;
		}
		else{
			del = head->data;
			head = NULL;
		}
		cout << del << " sudah dihapus.\n";
	}
	else{
		cout << "List masih kosong.";
	}
}

void clear(){
	TNode *temp, *hapus;
	temp = head;
	
	while(temp != NULL){
		hapus = temp;
		temp = temp->next;
		delete hapus;
	}
	head = NULL;
	cout << "Linked list sudah dihapus, tidak ada ada di dalam list.\n";
}

int main(int argc, char** argv) {
	int state = 1, list;
	Inisialisasi();
	while(state == 1){
		int menu;
		cout << "|------------------------------------|\n";
		cout << "|---------Program Linked List--------|\n";
		cout << "|--------------Pilih Menu------------|\n";
		cout << "|----------1. Insert Depan-----------|\n";
		cout << "|----------2. Insert Belakang--------|\n";
		cout << "|----------3. Hapus Depan------------|\n";
		cout << "|----------4. Hapus Belakang---------|\n";
		cout << "|----------5. Display----------------|\n";
		cout << "|----------6. Clear------------------|\n";
		cout << "Pilih menu (1-6): "; cin >> menu;
		switch(menu){
			case 1:
				cout << endl;
				cout << "Input isi dari list di depan: "; cin >> list;
				insertDepan(list);
				system("PAUSE");
				break;
			case 2:
				cout << endl;
				cout << "Input isi dari list di belakang: "; cin >> list;
				insertBelakang(list);
				system("PAUSE");
				break;
			case 3:
				hapusDepan();
				system("PAUSE");
				break;
			case 4:
				hapusBelakang();
				system("PAUSE");
				break;
			case 5:
				cout << endl;
				tampil();
				system("PAUSE");
				break;
			case 6:
				clear();
				system("PAUSE");
				break;
			default:
				cout << "Tidak ada menu nomor " << menu;
				cout << ", inputkan lagi angka 1 s/d 6 ya.\n";
				system("PAUSE");
				break;
		}
		system("CLS");
	}
		
	return 0;
}
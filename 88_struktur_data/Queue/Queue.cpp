#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int MAX_QUEUE = 5;

struct Queue{
	int data[MAX_QUEUE];
	int head;
	int tail;
};

Queue antrian;

void Inisialisasi(){	
	antrian.head = antrian.tail = -1;	// Inisialisasi head dan tail ke nilai -1
}

int IsEmpty(){
	if(antrian.tail == -1){	
		return 1;	// Jika tail = -1, maka antrian kosong
	}
	else{
		return 0;	// Jika tail != -1, maka tidak kosong
	}
}

int IsFull(){
	if(antrian.tail == MAX_QUEUE-1){
		return 1;	// Jika tail sudah mencapai index akhir dari queue, maka antrian sudah penuh
	}
	else{
		return 0;	// Selain itu, maka antrian belum penuh
	}
}

void Enqueue(int data){
	if(IsEmpty() == 1){						// Jika antrian masih kosong, maka inputan pertama kali dilakukan
		antrian.head = antrian.tail = 0;	// Set nilai head dan tail di index ke-0
		antrian.data[antrian.tail] = data;
	}
	else{
		if(IsFull() == 1){					// Jika antriannya penuh
			cout << "Antrian sudah penuh woy!\n";
		}
		else{
			antrian.tail++;
			antrian.data[antrian.tail] = data;
		}
	}
}

int Dequeue(){
	int e = antrian.data[antrian.head];
	for(int i=antrian.head; i<=antrian.tail-1; i++){
		antrian.data[i] = antrian.data[i+1];
	}
	antrian.tail--;
	return e;
}

void DisplayQueue(){
	if(IsEmpty() == 1){
		cout << "Antriannya masih kosong tuh!\nTidak ada yang bisa ditampilkan.";
	}
	else{
		for(int i=antrian.head; i<=antrian.tail; i++){
			cout << "Antrian ke-" << i+1 << ": " << antrian.data[i] << endl;
		}
	}
}

int main(int argc, char** argv) {
	int state = 1, antri;
	Inisialisasi();
	while(state == 1){
		int menu;
		cout << "|------------------------------|\n";
		cout << "|---------Program Queue--------|\n";
		cout << "|----------Pilih Menu----------|\n";
		cout << "|---------1. Enqueque----------|\n";
		cout << "|---------2. Dequeque----------|\n";
		cout << "|---------3. Display-----------|\n";
		cout << "Pilih menu (1-3): "; cin >> menu;
		switch(menu){
			case 1:
				cout << endl;
				cout << "Input isi dari antrian: "; cin >> antri;
				Enqueue(antri);
				system("PAUSE");
				break;
			case 2:
				Dequeue();
				system("PAUSE");
				break;
			case 3:
				cout << endl;
				cout << "Isi dari antrian:\n";
				DisplayQueue();
				system("PAUSE");
				break;
			default:
				break;
		}
		system("CLS");
	}
	
	
	
	return 0;
}
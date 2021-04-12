#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int MAX_STACK = 5;

struct Tumpukkan{	// Deklarasi stack dengan structure
	int top; 		// Penanda tumpukkan yang paling atas
	int numbers[5];	// Array of integer
};

Tumpukkan stack;

void Inisialisasi(){
	stack.top = -1;
}

int IsFull(){
	if(stack.top == MAX_STACK){
		return 1;	// Stack/tumpukkannya penuh
	}
	else{
		return 0;	// Stack/tumpukkannya belum penuh
	}
}

int IsEmpty(){
	if(stack.top == -1){
		return 1;	// Stack/tumpukkan masih kosong
	}
	else{
		return 0;	// Stack/tumpukkan sudah terisi
	}
}

void Push(int number){
	if(IsFull() == 1){
		cout << "Stacknya sudah penuh woy!\n";
	}
	else{
		if(IsEmpty() == 1){	// Jika stacknya masih kosong
			Inisialisasi();	// Inisialisasi nilai Top
			stack.top++;
			stack.numbers[stack.top] = number;
			cout << "Number " << number << " has been pushed\n";
		}
		else{
			stack.top++;
			stack.numbers[stack.top] = number;
			cout << "Number " << number << " has been pushed\n";
		}	
	}
}

void Pop(){
	if(IsEmpty() == 1){
		cout << "Stacknya masih kosong tuh!\n";
	}
	else{
		cout << "Number " << stack.numbers[stack.top] << " has been poped\n";
		stack.top--;
	}
}

void DisplayStack(){
	if(IsEmpty() == 1){
		cout << "Stacknya masih kosong tuh!\nTidak ada yang bisa ditampilkan.";
	}
	else{
		for(int i=stack.top; i>-1; i--){
			cout << "Stack ke-" << i << ": " << stack.numbers[i] << endl;
		}
	}
}

int main(int argc, char** argv) {

	
	
	
	// Stack
	int isi_stack, state = 1;
	Inisialisasi();
	while(state == 1){
		int menu;
		cout << "|------------------------------|\n";
		cout << "|---------Program Stack--------|\n";
		cout << "|----------Pilih Menu----------|\n";
		cout << "|---------1. Push--------------|\n";
		cout << "|---------2. Pop---------------|\n";
		cout << "|---------3. Display-----------|\n";
		cout << "Pilih menu (1-3): "; cin >> menu;
		switch(menu){
			case 1:
				cout << endl;
				cout << "Input isi dari stack: "; cin >> isi_stack;
				Push(isi_stack);
				system("PAUSE");
				break;
			case 2:
				Pop();
				system("PAUSE");
				break;
			case 3:
				cout << endl;
				cout << "Isi dari stack:\n";
				DisplayStack();
				system("PAUSE");
				break;
			default:
				break;
		}
		system("CLS");
	}
	return 0;
}
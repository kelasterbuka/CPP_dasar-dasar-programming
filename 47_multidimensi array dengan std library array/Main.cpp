#include <iostream>
#include <array>

using namespace std;

const int kolom = 3;
const int baris = 2;
void printArray(array < array <int,kolom> , baris> &nilaiArray){
	for (array <int,kolom> vectorBaris : nilaiArray){
		cout << "[ ";
		for(int nilaiKolom: vectorBaris){
			cout << nilaiKolom << " ";
		}
		cout << "]"<< endl;
	}
}

int main(){


	array < array <int,kolom> , baris> nilaiMD = {0,1,2,3,4,5};

	printArray(nilaiMD);
	cin.get();
	return 0;
}

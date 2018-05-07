#include <iostream>

using namespace std;

void printArray(int *ptrArray, int baris, int kolom){
	int index = 0;
	for(int i = 0; i < baris; i++){
		cout << "[ ";
		for (int j = 0; j < kolom; j++){
			cout << *(ptrArray + index) << " ";
			index++;
		}
		cout << "]"<< endl;
	}
}

int main(){

	// array multidimensi
	// array[baris][kolom]
	const int baris = 2;
	const int kolom = 2;
	int arrayMD[baris][kolom] = {1,2,3,4};
	
	printArray(*arrayMD, baris, kolom);
	cin.get();
	return 0;
}



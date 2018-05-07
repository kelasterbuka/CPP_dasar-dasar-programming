#include <iostream>
#include <algorithm>
#include <array>

const size_t arraySize = 10;

void printArray(std::array <int, arraySize> &angka){
	std::cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	std::cout << std::endl;
}

int main(){

	std::array <int, arraySize> angka = {9,4,2,5,8,0,1,7,6,3};
	printArray(angka);

	int angkaCari;
	bool ketemu;
	// sort dulu
	// search -> binary_search
	std::cout << "mencari angka dalam array diatas: \n";
	std::cin >> angkaCari;
	std::sort(angka.begin(), angka.end());
	ketemu = std::binary_search(angka.begin(), angka.end(), angkaCari);

	if (ketemu){
		std::cout << "ketemu" << std::endl;	
	} else {
		std::cout << "tidak ketemu" << std::endl;	
	}
	
	std::cin.get();
	return 0;
}





















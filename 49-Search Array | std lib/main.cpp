#include <iostream>
#include <algorithm>
#include <array>

using namespace std;


const size_t arraySize = 10;

void printarray(array <int, arraySize> &angka){
	cout << "Array: ";
	for(int &a : angka){
		std::cout << a << " ";
	}
	cout << endl;
}

/* 
	Fungsi Prototype Binary Search

	Implementasi algoritma Binary Search tanpa menggunakan fungsi standar dari C++.
	Sumber: https://www.geeksforgeeks.org/binary-search/
*/
int binarysearch(int arr[], int l, int r, int x);



int main(int argc, char** argv){
	array <int, arraySize> angka = {9, 4, 2, 5, 8, 0, 1, 7, 6, 3};
	printarray(angka);

	int cariangka;
	bool ketemu;

	// Sort dulu
	// Search -> binary_search
	cout << "Mencari angka dalam array diatas: \n";
	cin >> cariangka;
	sort(angka.begin(), angka.end());
	ketemu = binary_search(angka.begin(), angka.end(), cariangka);

	if (ketemu){
		cout << "Ditemukan" << endl;	
	} else {
		cout << "Tidak ditemukan" << endl;	
	}
	
	return 0;
}

int binarysearch(int arr[], int l, int r, int x){
	if(r >= l){
		int mid = l + (r - l) / 2;

		// Jika elemen array yang dicari berada di tengah
		if(arr[mid] == x){
			return mid;
		}

		// Jika elemen array yang dicari berada di sebelah kiri mid
		if(arr[mid] > x){
			return binarysearch(arr, l, mid-1, x);
		}

		// Selain di tengah dan sebelah kiri, maka elemen yg dicari pasti ada di sebelah kanan
		return binarysearch(arr, mid+1, r, x);
	}

	// Jika elemen array yang dicari tidak ada di dalam array
	return -1;
}



















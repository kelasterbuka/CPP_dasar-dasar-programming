#include <iostream>

using namespace std;

// reporter
int kuadrat(int x){ // fungsi kembalian
	int y;
	y = x * x;
	return y;
}

// worker
void tampilkan(int input){
	cout << "Menampilkan dengan void\n";
	cout << input << endl;
}

// int main(int argc, char const *argv[]){
int main(){

	int input, hasil, a, b, hasil2;
	cout << "Nilai kuadrat dari: ";
	cin >> input;

	hasil = kuadrat(input);
	tampilkan(hasil);

	return 0;
}

#include <iostream>
using namespace std;

union nama{
	int int_value;
	char char_value[4];
};


int main(){

	nama Otong;

	Otong.int_value = 12345642;

	cout << " data int_value: " << Otong.int_value << endl;
	cout << " data char_value: " << Otong.char_value << endl;

	Otong.char_value[0] = 'a';
	Otong.char_value[1] = 'b';
	Otong.char_value[2] = 'c';
	Otong.char_value[3] = 'd';

	cout << " data int_value: " << Otong.int_value << endl;
	cout << " data char_value: " << Otong.char_value << endl;


	cin.get();
	return 0;
}

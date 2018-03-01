#include <iostream>
using namespace std;

int x = 10; // variabel global

int ambil_global(){
	return x; // mengambil variabel global
}

int x_local(){
	int x = 5; // variabel local scopenya x_local()
	return x;
}

int main(){

	cout << "1. variabel global : " << x << endl;
	int x = 8; // variabel local untuk main
	cout << "2. variabel local main : " << x << endl;
	cout << "3. variabel ambil_global : " << ambil_global() << endl;
	cout << "4. variabel local main : " << x << endl;
	cout << "5. variabel x_local : " << x_local() << endl;
	cout << "6. variabel local main : " << x << endl;

	cout << "7. variabel local main : " << x << endl; 
	{
		cout << "8. variabel local main : " << x << endl; 	
		// block scope
		int x = 1;
		cout << "9. variabel local block : " << x << endl; 	
		cout << "10. variabel global : " << ::x << endl;
	}
	
	cout << "11. variabel local main : " << x << endl; 	

	cin.get();
	return 0;
}

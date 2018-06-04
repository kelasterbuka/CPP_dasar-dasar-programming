#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream myFile;
	string output,buffer;
	bool isData = false;
	int no;
	string nama;

	// ios::in
	// ios::ate = mulai dari akhir file
	// ios::binary 

	myFile.open("data.txt",ios::in);
	
	while(!isData){
		getline(myFile,buffer);
		output.append("\n" + buffer);
		if (buffer == "data"){
			isData = true;
		}
	}
	cout << output << endl;

	getline(myFile,buffer);
	cout << buffer << endl;
	int jumlah_data = 0;
	while(!myFile.eof()){
		myFile >> no;
		myFile >> nama;

		cout << no << "\t" << nama << endl;
		jumlah_data++;
	}
	cout << "jumlah data = " << jumlah_data << endl;

	cin.get();
	return 0;
}









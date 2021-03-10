#include <iostream>

using namespace std;

int main(){
	int i = 0;
	while(i <= 10){
		i++;
		if(i == 5){
			continue;
			//break;
		}
		cout << i << endl;
		
	}

	cout << "Akhirnya" << endl; 

	return 0;
}

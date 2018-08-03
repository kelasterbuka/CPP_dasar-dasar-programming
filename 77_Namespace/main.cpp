#include <iostream>
#include "otong.h"


void fungsi(){
	std::cout << "ini adalah fungsi biasa" << std::endl;
}

int main(){
	fungsi();
	std::cout << otong::b << std::endl;
	otong::fungsi();
	otong::cout(100);
	std::cin.get();
	return 0;
}
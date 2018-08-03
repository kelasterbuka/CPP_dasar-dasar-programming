#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

template<typename T, typename U>
auto max(T a, U b){
	return (a > b) ? T(a) : U(b);
}

int main(){

	int a = 17;
	string b = "test";
	double c = 15.432;
	float d = 16.5f;
	auto e = max(c,a);
	cout << a << " \ttipe: " << typeid(a).name() << endl;
	cout << b << " \ttipe: " << typeid(b).name() << endl;
	cout << c << " \ttipe: " << typeid(c).name() << endl;
	cout << d << " \ttipe: " << typeid(d).name() <<endl;
	cout << e << " \ttipe: " << typeid(e).name() <<endl;

	cin.get();
	return 0;
}
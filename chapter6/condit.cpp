#include <iostream>

int main(void){
	using namespace std;
	int a, b;

	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The large of " << a << " and " << b << " is " << (a > b ? a : b) <<endl;
	return 0;
}
#include <iostream>

int main(){
	using namespace std;

	int higgens = 5;
	int *pt = &higgens;

	cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
	cout << "Values of * pt = " << *pt << "; Values of pt = " << pt << endl;

	return 0;
}
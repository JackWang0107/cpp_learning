#include <iostream>

int main(){
	using namespace std;

	int year;
	cout << "What year was your house built?" << endl;
	(cin >> year).get();

	char address[80];
	cout << "What is its street address?\n";
	cin.getline(address, 80);

	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done.\n";

	return 0;
}
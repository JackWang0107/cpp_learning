#include <iostream>
#include <cstring>

int main(void){
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wern";
	char *ps;
	
	cout << animal << " and " << bird << "\n";
	// cout << ps << "\n";

	cout << "Enter a kind of animal: ";
	cin >> animal;

	ps = animal;
	cout << ps << "\n";
	cout << "Before using strcup():\n";
	cout << ps << " at " << (int *) ps << endl;

	ps = new char [strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy(): \n";
	cout << animal << " at " << (int * ) animal << endl;
	cout << ps << " at " << (int *) ps << endl;

	delete [] ps;

	return 0;
}
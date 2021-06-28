#include <iostream>

const int Max = 5;

int main(void){
	using namespace std;

	int golf[Max];
	
	cout << "Please enter yout golf scores.\n";
	cout << "You must enter " << Max << " round.\n";

	int i;
	for ( i = 0; i < Max ; i++){
		cout << "round	#" << i + 1 << ": ";
		while (! (cin >> golf[i])){
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Please enter a number: ";
		}
	}

	double total = 0.0d;
	for (i = 0; i < Max; i++)
		total += golf[i];

	cout << total / Max << " = average score " << Max << " rounds\n";
	cout << "Done.\n";

	return 0;
}
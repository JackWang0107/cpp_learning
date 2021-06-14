#include <iostream>

int main(void){
	using namespace std;
	
	wchar_t bob = L'P';

	cout << "\u222b" <<endl;
	wcout << L"tall" << L"\t" << bob << endl;

	return 0;
}
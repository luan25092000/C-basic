#include <iostream>
using namespace std;

int main() {
	// Vi du ve for
	for (int i = 1;i <= 10;i++) {
		cout << i << "\n";
	}
	
	//  index               0         1        2
	string fruits[3] = {"banana", "orange", "apple"};
	cout << fruits[1] << "\n";
	
	// do dai array
	// sizeof tra ve bit
	cout << sizeof(fruits) / sizeof(fruits[0]) << "\n";
	
	// Cach 1:
	for (int i = 0; i < sizeof(fruits) / sizeof(fruits[0]);i++) {
		cout << fruits[i] << "\n";
	}
	
	// Cach 2:
//	for (string fruit : fruits) {
//		cout << fruit << "\n";
//	}
}

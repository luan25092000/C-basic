#include <iostream>
using namespace std;

// Loai 1: function khong co tham so
void helloWorld() {
	cout << "Hello World\n";
}

// Loai 2: function co tham so
void say(string name = "anonymous") {
	cout << "My name is " << name << "\n";
}

// Loai 3: function khong co tham so, su dung return
string getName() {
	return "Luan Nguyen\n";
}

// Loai 4: function co tham so, su dung return
int sum(int a, int b) {
	return a + b;
}

void myFunction(string fruits[3], int size) {
	for (int i = 0; i < size;i++) {
		cout << fruits[i] << "\n";
	}
}

void tong(int k) {
	double sum = 0;
	for(int i = 0; i <= k; i++) {
		float mul = 1.0/(2*i + 1);
		cout << mul << "\n";
		sum += mul;
	}	
	cout << "tong la " << sum << "\n";
}

int main() {
//	helloWorld();
//	
//	say("Luan");
//	
//	say();
//	
//	string name = getName();
//	cout << name;
//	cout << getName();
//	
//	cout << sum(5, 6) << "\n";
//	
//	string fruits[3] = {"banana", "apple", "orange"};
//	int size = sizeof(fruits) / sizeof(fruits[0]);
//	myFunction(fruits, size);

	int k;
	cout << "enter k: ";
	cin >> k;
	tong(k);
}

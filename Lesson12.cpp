#include <iostream>
using namespace std;

class Dog {
//	attribute
	public:
		string name;
		int age;
	
	void bark() {
		cout << "Gau gau\n";
	}
	
	void welcome(string name) {
		cout << "Gau gau " << name << "\n";
	}
};

class Cat {
	public:
		string name;
	
//	Constructor
	Cat(string inputName) {
		name = inputName;
	}
};

int main() {
//	create object
	Dog myDog;
	
	myDog.name = "Milo";
	myDog.age = 3;
	
	cout << "My dog's name is " << myDog.name << " and he is " << myDog.age << " years old!\n";
	
	Dog herDog;
	
	herDog.name = "Kitty";
	herDog.age = 5;
	
	cout << "Her dog's name is " << herDog.name << " and she is " << herDog.age << " years old!\n";
	
	myDog.bark();
	herDog.bark();
	
	myDog.welcome("Luan");
	
	string inputCat;
	cout << "Enter your cat's name:\n";
	cin >> inputCat;
	Cat yourCat(inputCat);
	
	cout << "Your cat's name is " << yourCat.name << "\n";
}

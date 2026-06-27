#include <iostream>
using namespace std;

// Parent class
class Animal {
	// attribute
	public:
		string name;
		int age;
	
	// constructor
	Animal(string inputName) {
		name = inputName;
	}
	
	// method
	void introduce() {
		cout << "Name: " << name << "\n";
	}
};

class AnotherAnimal {
	public:
		string color;
};

// Child class
class Dog: public Animal, public AnotherAnimal {
	// ke thua constructor
	public:
	    Dog(string inputName): Animal(inputName) {}
};

class Cat: public Animal {
	// ke thua constructor
	public:
	    Cat(string inputName): Animal(inputName) {}
};

int main() {
	string dogName, catName;
	
	cout << "Enter dog's name:";
	cin >> dogName;
	Dog myDog(dogName);
	myDog.age = 3;
	
	cout << "Enter cat's name:";
	cin >> catName;
	Cat myCat(catName);
	myCat.age = 2;
	
	cout << "My dog's name is " << myDog.name << " and he is " << myDog.age << " years old\n";
	cout << "My cat's name is " << myCat.name << " and she is " << myCat.age << " years old\n";
	
	myDog.introduce();
	myCat.introduce();
	
	myDog.color = "black";
	
	cout << "My dog's color is " << myDog.color;
}

#include <iostream>
using namespace std;

class Animal {
	public:
		virtual void say() {
			cout << "Bla bla ...\n";
		}	
};

class Dog : public Animal {		
	public:
		void say() override {
			cout << "Gau gau ...\n";
		}
};

class Cat : public Animal {		
	public:
		void say() override {
			cout << "Meo meo ...\n";
		}
};

class Duck : public Animal {		
	public:
		void say() override {
			cout << "Quack quack ...\n";
		}
};

class Mouse : public Animal {		
	public:
		void say() override {
			cout << "Chít chít ...\n";
		}
};

int main() {
	Dog myDog;
	Cat myCat;
	Duck myDuck;
	Mouse myMouse;
	// Animal* la con tro
	// &myDog, &myCat la dia chi cua 2 bien myDog, myCat
	Animal* animals[] = {&myDog, &myCat, &myDuck, &myMouse};
	int animalLength = sizeof(animals) / sizeof(animals[0]);
	
	for (int i = 0; i < animalLength; i++) {
		animals[i]->say();
	}
	
}

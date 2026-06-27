#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!\n";
  cout << 10 << "\n";
  // 1 line
  /*
  	line 1
  	line 2
  	...
  */
  string fullName = "Nguyen Huu Luan";
  int age = 30;
  cout << "My name is " << fullName << " and I am " << age << " years old!\n";
  
  // gia tri hang so khong thay doi duoc
  const double pi = 3.14;
  cout << pi << "\n";
  
  string name;
  cout << "Enter your name:";
  cin >> name; // input
  cout << "My name is " << name << "\n";
  
  int a = 10, b = 3, c = 2;
  cout << (a + b) << "\n";
  cout << (a - b) << "\n";
  cout << (a * b) << "\n";
  cout << (a / b) << "\n";
  cout << (a % b) << "\n";
  
  c++; // tang 1 don vi
  cout << c << "\n";
  c--; // giam 1 don vi
  cout << c << "\n";
}

#include <stdio.h>

int main() {
	int a = 10, b = 5, c = 20, d = 2;
	
	if (a > b) {
		printf("a > b\n");
	} else if (a == b) {
		printf("a = b\n");
	} else {
		printf("a < b\n");
	}
	
	// 5 < c <= 30
	if (c > 5 && c <= 30) {
		printf("5 < c <= 30\n");
	}
	
	// d < 5 or d > 100
	if (d < 5 || d > 100) {
		printf("d < 5 or d > 100\n");
	}
	
	bool check = false;
	if (!check) {
		printf("%d\n", check);
	}
	
	// ternary operator
	int age = 17;
	printf("%s\n", age < 18 ? "tre vi thanh nien" : "nguoi lon");
	
	// input
	int number;
	printf("Enter number:\n");
	scanf("%d", &number); // input number
	printf("Number is %d\n", number);
	
	char fullName[100];
	printf("Enter your fullname:\n");
	scanf("%s", &fullName); // input string
	printf("My name is %s", fullName);
}

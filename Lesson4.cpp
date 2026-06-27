#include <stdio.h>

// TH1: function khong co tham so
void hello() {
	printf("Hello World\n");
}

// TH2: function co tham so
void introduce(char name[], int age) {
	printf("My name is %s and I am %d years old\n", name, age);
}

// TH3: function khong tham so, su dung return
char* say() {
	return "Hello Everyone";
}

int getNumber() {
	return 10;
}

// TH4: function co tham so, su dung return
int sum(int a, int b) {
	return a + b;
}

int main() {
	// Goi function
	hello();
	
	introduce("Luan", 30);
	
	char* s = say();
	printf("%s\n", s);
	
	int number = getNumber();
	printf("%d\n", number);
	
	printf("%d\n", sum(4, 5));
	
	return 0;
}

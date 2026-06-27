#include <stdio.h>

int main() {
	FILE *fptr;
	
	// write file
	fptr = fopen("lesson7.txt", "w");
	fprintf(fptr, "Hello Teacher");
	fclose(fptr);
	printf("Write file successful!");
	
	// append file
	fptr = fopen("lesson7.txt", "a");
	fprintf(fptr, "\nHello World");
	fclose(fptr);
	printf("\nAppend file successful!");
	
	// read file
	fptr = fopen("lesson7.txt", "r");
	char text[50];
	printf("\n");
	while(fgets(text, 50, fptr)) {
		printf("%s", text);
	}
}

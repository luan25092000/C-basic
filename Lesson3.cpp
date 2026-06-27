#include <stdio.h>

int main() {
	int day = 4;
	
	switch (day) {
		case 2:
			printf("Monday\n");
			break; // chia truong hop
		case 3:
			printf("Tuesday\n");
			break;
		default: // giong else trong cau dieu kien
			printf("Invalid day\n");
	}
	
	printf("Vi du ve vong lap while:\n");
	// in ra các so tu 1 den 10
	int i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++; // tang len 1 don vi
	}
	
	printf("Vi du ve break:\n");
	int j = 1;
	while (j <= 10) {
		if (j == 5) {
			break; // thoat khoi vong lap
		}
		printf("%d\n", j);
		j++; // tang len 1 don vi
	}
	
	printf("Vi du ve continue:\n");
	int k = 0;
	while (k < 10) {
		k++; // tang len 1 don vi
		if (k == 5) {
			continue; // skip vong lap hien tai
		}
		printf("%d\n", k);
	}
	
	printf("Vi du ve vong lap do...while:\n");
	int x = 1;
	do {
		printf("%d\n", x);
		x++;
	} while (x <= 10);
	
	printf("Vi du ve vong lap for:\n");
	for (int y = 1; y <= 10; y++){
		printf("%d\n", y);
	}
	
	for (int i = 1; i <= 4; i++) { // so hang
		for (int j = 1; j <= i; j++) { // so ngoi sao
			printf("*");
		}
		printf("\n");
	}
}

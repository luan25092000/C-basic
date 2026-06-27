#include <stdio.h>

int fib(int i) {
	if (i <= 1) {
		return i;
	}
    return fib(i - 1) + fib(i - 2);
}

int main() {
	int n;
	printf("Enter n:");
	scanf("%d", &n);
    
	printf("Fibonacci:");
    for (int i = 0; i < n; i++) {
    	printf("%d ", fib(i));
    	/*
			i = 0 => fib(0) = 0
	    	i = 1 => fib(1) = 1
	    	i = 2 => fib(2) = fib(0) + fib(1) = 1
	    	i = 3 => fib(3) = fib(1) + fib(2) = 2
	    	i = 4 => fib(4) = fib(2) + fib(3) = 3
	    	i = 5 => fib(5) = fib(3) + fib(4) = 5
    		...
    	*/
    }
    return 0;
}

#include <stdio.h>

int main() {
    int age = 20;
    char fullName[] = "Lam";
    printf("My name is %s. I am %d years old!", fullName, age);
    float n = 1.5;
    printf("\n%.1f", n);
    
    int a = 4, b = 6, c = 9, d = 3;
    printf("\n%d", a + b);
    printf("\n%d", a - b);
    printf("\n%d", a * b);
    printf("\n%d", a / b);
    printf("\n%d", a % b);
    c++; // tang 1 don v?
    printf("\n%d", c);
    c--; // gi?m 1 don v?
    printf("\n%d", c);
    
    d += 10;
    d -= 3;
    d *= 10;
    d /=25;
    d %= 3;
    printf("\n%d", d);
    
    return 0;
}

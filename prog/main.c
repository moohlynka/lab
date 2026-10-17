#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    printf("You entered: %d and %d\n", a, b);
    printf("Sum: %d + %d = %d\n", a, b, a + b);

    return 0;
}

#include <stdio.h>
int main(void) {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("Addition = %.2f\n", a + b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);
    if (b != 0)
        printf("Division = %.2f\n", a / b);
    else
        printf("Division by zero is not allowed.\n");
    return 0;
}

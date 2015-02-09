#include <stdio.h>

int main()
{
    int first, second, add, subtract, multiply, remainder;
    float divide;

    printf("Enter two integers\n");
    scanf("%d%d", &first, &second);

    add = first + second;
    subtract = first - second;
    multiply = first * second;
    divide = first /(float)second;
    remainder = first % second;

    printf("Sum = %d\n", add);
    printf("Difference = %d\n", subtract);
    printf("Product = %d\n", multiply);
    printf("Quotient = %.2f\n", divide);
    printf("Remainder = %d\n", remainder);

    return 0;
}

#include <stdio.h>

int main()
{
    float Pi = 3.14, area, ci, rad;

    printf("\nEnter radius of the circle in cm: ");
    scanf("%f", &rad);

    area = Pi * rad * rad;
    printf("\nArea of the circle = %.2f cm^2", area);

    ci = 2 * Pi * rad;
    printf("\nCircumference of the circle = %.2f cm^2", ci);

    return (0);
}

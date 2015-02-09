#include <stdio.h>

int main()
{
    int first, second, *p, *q, sum;
    printf("Enter two numbers to add\n");
    scanf("%d%d", &first, &second);

    p = &first;
    q = &second;

    sum = *p + *q;
    printf("Sum of %d and %d = %d", first, second, sum);
    return 0;
    }

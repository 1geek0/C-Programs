#include <stdio.h>

int main()
{
    int n, sum = 0, remainder, m;

    printf("Enter an integer: ");
    scanf("%d", &n);
    m = n;

    while(n != 0){
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }
    printf("The sum of digits of %d = %d", m, sum);
    return 0;
}

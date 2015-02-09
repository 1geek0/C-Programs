#include <stdio.h>

int main()
{
    int n, sum = 0, c, value;

    printf("Enter The Number Of Integers You Want To Add\n");
    scanf("%d", &n);

    printf("Enter %d integers\n",n);

    for (c = 1; c <= n; c++){
        scanf("%d", &value);
        sum = sum + value;
    }
    printf("Sum Of Integers = %d\n",sum);
    return 0;
}

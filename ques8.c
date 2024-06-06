#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The first %d terms of the Fibonacci series are:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);

        int temp = a;
        a = b;
        b = temp + b;
    }

    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int a, fact = 1;

    printf("Enter a number ");
    scanf("%d", &a);

    while (a > 1) {
        fact *= a;
        a--;
    }

    printf("Factorial is: %d\n",fact);

    return 0;
}

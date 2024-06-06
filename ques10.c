#include <stdio.h>

int main(){
    long long int base, exponent, result = 1;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    int i;
    for ( i = 1; i <= exponent; i++){
        result *= base;
    }

    printf("%d raised to the power of %d is: %d\n", base, exponent, result);

    return 0;
}

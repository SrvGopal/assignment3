#include <stdio.h>

int main(){
    long long int base, exponent, result = 1;

    printf("Enter the base: ");
    scanf("%lld", &base);

    printf("Enter the exponent: ");
    scanf("%lld", &exponent);
    int i;
    for ( i = 1; i <= exponent; i++){
        result *= base;
    }

    printf("%lld raised to the power of %lld is: %lld\n", base, exponent, result);

}

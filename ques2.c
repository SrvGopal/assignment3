#include <stdio.h>

int main() {
    float a, b;
    char opr;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &opr);

    printf("Enter the second number: ");
    scanf("%f", &b);

    switch (opr) {
        case '+':
            printf("Result: %.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-':
            printf("Result: %.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*':
            printf("Result: %.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/':
            if (num2!= 0) {
                printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please enter +, -, * or /\n");
            break;
    }

    return 0;
}

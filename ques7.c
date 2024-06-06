#include <stdio.h>

int main()
{
    int userinput, Sum = 0;

    printf("Enter the number: ");
    scanf("%d", &userinput);

    while (userInput!= 0)
    {
        digitSum += userInput % 10;
        userInput = userInput / 10;
    }

    printf("Sum is equal to : %d\n", digitSum);

    return 0;
}

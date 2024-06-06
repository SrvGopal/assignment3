#include <stdio.h>

int main(){
    int n1, n2, temp;

    printf("Enter two positive number here: ");
    scanf("%d %d", &n1, &n2);

    if (n2 > n1){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    while (n2 != 0){
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }

    printf("The GCD of the two numbers is: %d\n", n1);

 
}

#include <stdio.h>

int main() {
    int num, temp, p, rem, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        temp = temp / 10;
        n++;
    }

    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        p = 1;
        for (int i = 1; i <= n; i++) {
            p = p * rem;
        }
        num = num - p;
        temp = temp / 10;
    }

    if (num == 0) {
        printf("Yes. It is Armstrong No.");
    } else {
        printf("No. It is not an Armstrong No.");
    }

    return 0;
}

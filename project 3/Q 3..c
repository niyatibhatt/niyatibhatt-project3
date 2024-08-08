#include <stdio.h>

int main() {
    int number, originalNumber, lastDigit, firstDigit, sum;


    printf("Enter a number: ");
    scanf("%d", &number);


    if (number < 0) {
        number = -number;
    }

    originalNumber = number;
    lastDigit = number % 10;


    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;


    sum = firstDigit + lastDigit;


    printf("The first digit: %d\n", firstDigit);
    printf("The last digit: %d\n", lastDigit);
    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}


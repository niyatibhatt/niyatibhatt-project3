#include <stdio.h>

int main() {
    long long number;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &number);


    if (number == 0) {
        count = 1;
    } else {

        if (number < 0) {
            number = -number;
        }


        while (number > 0) {
            number /= 10;
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}


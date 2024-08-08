#include <stdio.h>

int main() {
    char ch = 'a';  // Start with the first alphabet

    do {
        printf("%c ", ch);  // Print the current alphabet
        ch += 4;  // Move to the next alphabet, skipping 3
    } while (ch <= 'z');  // Continue until the last alphabet

    printf("\n");  // Print a newline at the end
    return 0;
}

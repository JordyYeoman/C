#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

char get_string(char *str) {
 printf("Enter a string: ");
 return scanf("%s", str); // Indicating that the following user input is a string via the %s identifier.
}

// Note 1 - %s is a format specifier, it means that the following argument is a string.
int main(void) {
    printf("Systems booting up...\n");

    char bigBossString[100]; // Declaring a character array (char) to store the array of characters - aka 'string'
    get_string(bigBossString); // Passing our string pointer to function that will collect user input.

    printf("You entered: %s\n", bigBossString);

    // Check if uppercase or lowercase function

}
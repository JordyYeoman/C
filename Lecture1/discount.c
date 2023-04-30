#include <stdio.h>

char get_string(char *str) {
 printf("Enter a string: ");
 return scanf("%s", str); // Indicating that the following user input is a string via the %s identifier.
}

float get_float() {
    printf("Enter regular price $");
    float x;
    return scanf("%f", &x); // Indicating that the following argument is a float
}

int main(void) {
    printf("Till loading up....\n");
    float regular = get_float();
    printf("Regular price is: %f\n$", regular);
    printf("\n");
}
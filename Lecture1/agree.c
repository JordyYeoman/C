#include <stdio.h>

void startSystem() {
    // Create runtime
    printf("Creating runtime...\n");
    // Setup defaults
}

int main(void) {
    char userAnswer;
    
    printf("Do you want to boot system? ");
    userAnswer = getchar();    

    // Conditionally check user input
    if (userAnswer == 'y' || userAnswer == 'Y') {
        printf("System Booting...\n");
        startSystem();
    }

    if(userAnswer == 'n' || userAnswer == 'N') {
        printf("System shutting down...\n");
    }
}
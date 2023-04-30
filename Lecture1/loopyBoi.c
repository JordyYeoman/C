#include <stdio.h> 

// Creating a prototype so the compiler knows this function will exist and be assigned a proper method.
void speak(int numTimesToRun);

int main(void) {
    speak(10);
}

void speak(int numTimesToRun) {
    for(int i = 0; i < 10; i++) {
        // %d to tell the compiler the following argument will be an int
        printf("Yo waddup dude! Run through: %d", i + 1);
        printf("\n");
    }
}

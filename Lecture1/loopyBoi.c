#include <time.h>
#include <stdio.h> 

// Creating a prototype so the compiler knows this function will exist and be assigned a proper method.
void speak(long numTimesToRun);

int main(void) {
    long numTimesToRun = 3200000000; // How many cpu cycles an M1 mac chip can do.

    clock_t start = clock(), diff;
    speak(numTimesToRun);
    diff = clock() - start;

    int msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Time taken %d seconds %d milliseconds\n", msec/1000, msec%1000);
}

void speak(long numTimesToRun) {
    for(long i = 0; i < numTimesToRun; i++) {
        // %d to tell the compiler the following argument will be an int
        // printf("Yo waddup dude! Run through: %d", i + 1);
        // printf("\n");
    }

    for(long i = 0; i < 100; i++) {

    }
}
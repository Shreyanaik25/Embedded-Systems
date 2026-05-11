#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number
int generateRandomNumber() {
    return rand(); // Returns a random number
}

int main() {
    srand(time(0)); // Seed the random number generator with the current time

    int randomNumber = generateRandomNumber(); // Call function
    printf("Generated Random Number: %d\n", randomNumber); // Print result

    return 0;
}


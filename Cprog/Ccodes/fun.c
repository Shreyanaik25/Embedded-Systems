#include <stdio.h>

// Function prototypes
void getInput(float *num1, float *num2);
void calculate(float num1, float num2, float *sum, float *difference, float *product, float *quotient);

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

    // Get user input
    getInput(&num1, &num2);

    // Perform calculations
    calculate(num1, num2, &sum, &difference, &product, &quotient);

    // Display results
    printf("Results:\n");
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    if (num2 != 0) {
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Quotient: Undefined (division by zero)\n");
    }

    return 0;
}

// Function to get user input
void getInput(float *num1, float *num2) {
    printf("Enter two numbers: ");
    scanf("%f %f", num1, num2);
}

// Function to perform calculations
void calculate(float num1, float num2, float *sum, float *difference, float *product, float *quotient) {
    *sum = num1 + num2;
    *difference = num1 - num2;
    *product = num1 * num2;
    if (num2 != 0) {
        *quotient = num1 / num2;
    } else {
        *quotient = 0; // This will not be used if num2 is
    }
}


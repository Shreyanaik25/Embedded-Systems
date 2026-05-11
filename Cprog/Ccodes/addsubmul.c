#include <stdio.h>

// Function prototypes
void menu();
void add(int a, int b);
void sub(int a, int b);
void multi(int a, int b);

int main() {
    int choice, a, b;

    do {
        menu();  // Display menu options

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) { // Take input only if valid operation is selected
            printf("Enter the values of a and b: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("You selected Addition\n");
                add(a, b);
                break;
            case 2:
                printf("You selected Subtraction\n");
                sub(a, b);
                break;
            case 3:
                printf("You selected Multiplication\n");
                multi(a, b);
                break;
            case 4:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}

void menu() {
    printf("\nMENU:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Exit\n");
}

void add(int a, int b) {
    int sum = a + b;
    printf("Sum = %d\n", sum);
}

void sub(int a, int b) {
    int difference = a - b;
    printf("Difference = %d\n", difference);
}

void multi(int a, int b) {
    int product = a * b;
    printf("Product = %d\n", product);
}

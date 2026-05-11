#include<stdio.h>

int num;

void palindrome();

void main() {
    printf("Enter the number: ");
    scanf("%d", &num);
    palindrome();
}

void palindrome() {
    int temp, reversed = 0, remainder;

    temp = num;


    while (temp != 0) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }


    if (num == reversed) {
        printf("%d is a Palindrome\n", num);
    } else {
        printf("%d is not a Palindrome\n", num);
    }
}


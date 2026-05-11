#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int evenCount = 0, oddCount = 0;
    int i;

    // Input elements into the array
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print the elements
    printf("Your elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    // Count even and odd numbers
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;  // Increment if the number is even
        }
        else
        {
            oddCount++;  // Increment if the number is odd
        }
    }

    // Output the results with better formatting
    printf("Even Count: %d\n", evenCount);
    printf("Odd Count: %d\n", oddCount);

    return 0;
}

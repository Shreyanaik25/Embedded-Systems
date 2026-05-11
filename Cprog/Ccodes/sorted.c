#include <stdio.h>
int main()
{
    int arr[100], n, i, isSorted = 1; // 1 means true

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Check if sorted in ascending order
    for(i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            isSorted = 0; // Not sorted
            break;
        }
    }

    if(isSorted)
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is NOT sorted in ascending order.\n");

    return 0;
}


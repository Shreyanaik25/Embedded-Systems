#include<stdio.h>
#include<limits.h>  // For INT_MAX

int main()
{
    int arr[100], i, n, first, second;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    if(n < 2) {
        printf("Need at least 2 elements.\n");
        return 0;
    }

    printf("Enter the %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    first = second = INT_MAX;

    for(i = 0; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == INT_MAX) {
        printf("No second smallest element (all elements are same).\n");
    } else {
        printf("The second smallest element is: %d\n", second);
    }

    return 0;
}

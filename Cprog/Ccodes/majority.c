#include<stdio.h>
int main()
{
    int n, i, j, arr[100], count;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        count = 1;  // move it here
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > n/2)
        {
            printf("Majority element = %d\n", arr[i]);
            return 0; // exit program if found
        }
    }

    printf("No majority element found.\n");
    return 0;
}

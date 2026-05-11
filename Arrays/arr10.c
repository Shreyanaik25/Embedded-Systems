#include<stdio.h>
int main()
{
    int arr[100], i, n, key, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to delete: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            pos = i;
            break;
        }
    }

    if(pos == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        for(i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Updated array:\n");
        for(i = 0; i < n; i++)
        {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}

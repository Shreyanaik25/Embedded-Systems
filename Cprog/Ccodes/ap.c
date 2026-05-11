#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of rooms:\n");
    scanf("%d", &n);

    int arr[n], maxtemp, mintemp;
    int comfortCount = 0;

    printf("Enter the %d temperatures:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] >= 22 && arr[i] <= 26)
        {
            comfortCount++;
        }
    }

    maxtemp = arr[0];
    mintemp = arr[0];

    for(i = 0; i < n; i++)
    {
        if(arr[i] > maxtemp)
        {
            maxtemp = arr[i];
        }
        if(arr[i] < mintemp)
        {
            mintemp = arr[i];
        }
    }

    printf("\nTemperatures recorded:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nMaximum Temperature: %d°C", maxtemp);
    printf("\nMinimum Temperature: %d°C", mintemp);
    printf("\nComfortable Rooms (22°C to 26°C): %d\n", comfortCount);

    return 0;
}

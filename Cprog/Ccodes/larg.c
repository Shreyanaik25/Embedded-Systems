#include<stdio.h>
int main()
{
    int n;
    printf("Enter how many elements you want:");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    int largest=arr[i];
    int secondLargest=largest;
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondLargest && arr[i]!=largest)
        {
            secondLargest=arr[i];
        }

    }
        if (secondLargest == -1)
    {
        printf("No second largest element exists.\n");
    }
    else
    {
        printf("Second Largest Element: %d\n", secondLargest);
    }
    printf("Largest Elements:%d\n",largest);
    return 0;
}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the how many elements you want to print:");
    scanf("%d",&n);
    int arr[n];
    int i;
    int max,min;
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }

    }
    printf("Maximum:%d\n",max);
    printf("Minimum;%d\n",min);
    return 0;
}

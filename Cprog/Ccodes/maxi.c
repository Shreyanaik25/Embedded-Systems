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
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximum:%d",max);
    return 0;
}

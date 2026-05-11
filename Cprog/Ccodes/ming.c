/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int max,min;
    printf("Enter n numbers:\n",n);
    for(int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    max=min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum:%d\n",max);
    printf("Mimimum:%d\n",min);
    return 0;
}  */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the  number of elements:\n");
    scanf("%d",&n);
    int min,max;
    int i,arr[n];
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
    {
        printf("Elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("Maximum:%d\n",max);
    printf("Minimum:%d\n",min);
    return 0;
}


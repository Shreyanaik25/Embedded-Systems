#include<stdio.h>
int main()
{
    int n;
    printf("Enter the how many elements you want:");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    int i;
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("Original array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr1[i]);
    }
    printf("Copied array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr2[i]);
    }
    return 0;
}

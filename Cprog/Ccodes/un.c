#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int original[n],reversed[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Elements %d:",i+1);
        scanf("%d",&original[i]);
    }
    for(i=0;i<n;i++)
    {
        reversed[i]=original[n-1-i];
    }
    printf("Original Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",original[i]);
    }
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",reversed[i]);
    }
    return 0;
}

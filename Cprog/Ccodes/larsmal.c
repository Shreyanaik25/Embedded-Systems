#include<stdio.h>
int main()
{
    int n,i,arr[100],largest,smallest;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("the %d elements are :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=smallest=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        else if(arr[i]<smallest)
        {
            smallest =arr[i];
        }
    }
    printf("The largest element of an array is %d\n",largest);
    printf("The smallest element of an array is %d\n",smallest);
    return 0;
}

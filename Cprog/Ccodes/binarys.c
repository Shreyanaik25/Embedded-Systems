#include<stdio.h>
int main()
{
    int arr[100],n,i,low,high,key,found=0,mid;
    printf("Enter the element:");
    scanf("%d",&n);
    printf("the %d elements are :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    low=0;
    high=n-1;
    printf("Enter the key to search:");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
    if(arr[mid]==key)
    {
        printf("The %d is found at the index arr[%d]\n",key,mid);
        found=1;
        break;
    }
    else if(arr[mid]<key)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    }
    }
    if(!found)
    {
        printf("%d element not found",key);

    }
}


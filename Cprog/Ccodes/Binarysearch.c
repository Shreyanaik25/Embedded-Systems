#include<stdio.h>
int main()
{
    int arr[100],n,high,low,key,i,found=0,mid;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    low=0;
    high=n-1;
    printf("Enter the element to search:");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("The %d found at index arr[%d]",key,mid);
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
        printf("%d not found\n",key);
    }
}

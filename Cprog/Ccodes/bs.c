#include<stdio.h>
int main()
{
    int arr[100],i,n,key,low,high ,mid,found=0;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i-0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to search\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(arr[mid]==key)
        {
            printf("%d found at index arr[%d]\n",key,mid);
            found=1;
            break;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(found==0)
    {
        printf("%d not found\n",key);
    }
    return 0;
}

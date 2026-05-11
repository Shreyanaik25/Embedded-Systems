#include<stdio.h>
int main()
{
    int n,i,arr[100],high,low,key,mid,found=-1;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to be searched\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(arr[mid]==key)
        {
            found=mid;
            high=mid-1;
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
    if(found!=-1)
    {
        printf("%d found at index arr[%d]\n",key,found);
    }
    else
    {
        printf("%d not found\n",key);
    }
}

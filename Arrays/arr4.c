#include<stdio.h>
int main()
{
    int arr[100],i,n,found=0,key;
    printf("Enter array elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a key to search element:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Enter element is found in an array\n");
    }
    else
    {
        printf("Entered element is not found in ana array\n");
    }
}
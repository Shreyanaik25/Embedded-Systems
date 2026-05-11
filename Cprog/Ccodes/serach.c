#include<stdio.h>
int main()
{
    int arr[100],i,n,found=0,key;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to be searched:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("The %d element found at index arr[%d]\n",key,i);
            found=1;
            break;
        }
        arr[i]++;
    }
    if(!found)
    {
        printf("The %d not founn",key);
    }
    return 0;
}

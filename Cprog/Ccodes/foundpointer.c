#include<stdio.h>
int main()
{
    int arr[100],*p,n,i,found=0,key;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    printf("Enter the key to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(*p==key)
        {

            printf("The %d found at index arr[%d]\n",*p,key);
            found=1;
            break;
    }
    p++;
    }
    if(!found)
    {
        printf("The %d elemnet not found\n",key);
    }
}


#include<stdio.h>
int main()
{
    int arr[100],key,i,found=0,n;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements to be search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("The %d found at index arr[%d]\n",key,i);
            found=1;
            break;
        }
    }
    if(!found)
    {
        printf("%d element not found",key);
    }
}

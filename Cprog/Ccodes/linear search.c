#include<stdio.h>
int main()
{
    int n,arr[100],i,search,found=0;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to search\n");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("%d is found at index arr[%d]\n",search,i);
            found=1;
            break;
        }

    }
    if(found==0)
    {
        printf("%d is not found in an array\n",search);
    }
}

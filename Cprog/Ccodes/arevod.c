#include<stdio.h>
int main()
{
    int n,arr[100],i;
    printf("Enter the elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The even numbers are:\n");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
        }
    }
        printf("The odd numbers are:\n");
        for(i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                printf("%d\n",arr[i]);
            }

        }
}


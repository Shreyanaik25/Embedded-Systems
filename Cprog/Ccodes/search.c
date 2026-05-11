#include<stdio.h>
int main()
{
    int n;
    printf("Enter the how many elements you want:");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    int found=0;
    printf("Enter the number to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)

        {
            printf("Element found at index %d",i);
            found=1;
            break;
        }
    }
        if(found==0)
        {
            printf("Element not found");
        }
    }



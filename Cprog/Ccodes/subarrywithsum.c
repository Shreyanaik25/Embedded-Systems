#include<stdio.h>
int main()
{
    int arr[100],i,n,currentsum=0,sum,j;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target sum");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        currentsum+=arr[j];
        for(j=i+1;j<=n;j++)
        {
            if(currentsum==sum)
            {
                printf("Subarray found at indexes between %d to %d\n",i,j-1);
                return 0;
            }
            if(currentsum>sum || j==n)
                break;
            currentsum+=arr[j];
        }
    }

        printf("No sum found in subarray \n");
        return 0;
    }



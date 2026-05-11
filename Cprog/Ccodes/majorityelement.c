#include<stdio.h>
int main()
{
    int arr[100],n,i,j,count;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;

        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
         if(count > n/2) {
            printf("Majority element = %d\n", arr[i]);
            return 0;
         }
    }
    printf("No majority element\n");
    return 0;

    }

#include<stdio.h>
int main()
{
    int arr[100],i,n,j,count=0;
    printf("Enter the element:");
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
        printf("%d occurs %d times\n",arr[i],count);
    }

}

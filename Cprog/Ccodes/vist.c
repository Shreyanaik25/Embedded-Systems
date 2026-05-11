#include<stdio.h>
int main()
{
    int n,arr[100],visited[100],i,j,count=0;
    printf("enter the elements:");
    scanf("%d",&n);
    printf("The %d elements are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
        {
            continue;
            count=1;
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    visited[j]=1;
                }
            }
            printf("%d occurs %d times\n",arr[i],count);
        }
    }
}

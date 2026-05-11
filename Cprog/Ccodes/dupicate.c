#include<stdio.h>
int main()
{
    int arr[100],visited[100],i,j,n,count,duplicatecount=0;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(visited[j]==1)
            continue;
        count=1;
        for(j=i+1;j<n-1;j++)
        {
            if(arr[i]==arr[j])
            {
                visited[j]=1;
                count++;
            }
        }

    if(count>1)
    {
        duplicatecount++;
        printf("Element %d occurs %d times\n", arr[i], count);
    }
}

    printf("Total duplicate elements: %d\n", duplicatecount);

    return 0;
}



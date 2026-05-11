#include<stdio.h>
int main()
{
    int arr[100],visited[100];
    int n,i,j,count;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("%d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        visited[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(visited[i]==1)
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
        if(count > 1) {
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}







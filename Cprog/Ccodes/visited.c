#include<stdio.h>
int main()
{
    int arr[100],visited[100],n,i,j,count;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are \n",n);
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
            if(arr[j]==arr[i])
            {
                count++;
                visited[j]=1;
            }
        }
    printf("%d found at %d times\n",arr[i],count);
    }
}

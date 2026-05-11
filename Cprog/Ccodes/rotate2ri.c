#include<stdio.h>
int main()
{
    int arr[100],n,i,temp,alpha;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    alpha=arr[n-2];
    for(i=n-1;i>=2;i--)
    {
        arr[i]=arr[i-2];
    }
    arr[0]=temp;
    arr[1]=alpha;
    printf("rotating right by 2 \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

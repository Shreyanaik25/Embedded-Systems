#include<stdio.h>
int main()
{
    int arr[100],i,j,k,n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
for(int i = 0; i < n; i++)
{
    for(int j = i; j < n; j++)
    {
        for(int k = i; k <= j; k++)
        {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}
}
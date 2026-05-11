#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The %d elements are:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

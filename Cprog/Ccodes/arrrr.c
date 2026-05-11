#include<stdio.h>
int main()
{
    int n,arr[100],i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("The %d elements are:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

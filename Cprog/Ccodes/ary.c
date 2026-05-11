#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of an array are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

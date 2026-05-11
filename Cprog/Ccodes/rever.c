#include<stdio.h>
int main()
{
    int n,arr[100],i;
    printf("Enter the element\n");
    scanf("%d",&n);
    printf("The %d elements are \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array\n");

    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}

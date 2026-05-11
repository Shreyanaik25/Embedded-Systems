#include<stdio.h>
int main()
{
    int n;
    printf("Enter how much elements you want :");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed array =\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

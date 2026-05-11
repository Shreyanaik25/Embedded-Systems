#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Elements you want\n");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    int i;
    printf("Enter the %d elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("The sum is:");
    for(i=0;i<n;i++)
    {
      sum+=arr[i];
        printf("The sum is %d\n",sum);
    }
    return 0;
}

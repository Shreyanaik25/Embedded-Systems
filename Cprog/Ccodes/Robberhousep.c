#include<stdio.h>
int main()
{
    int arr[100],include,exclude,newexclude,i,n;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("the %d elements are:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    include=arr[0];
    exclude=0;
    for(i=1;i<n;i++)
    {
        newexclude=(include>exclude)?include:exclude;
        include=arr[i]+exclude;
        exclude=newexclude;
    }
    int result=(include>exclude)?include:exclude;
    printf("The maximum sum of non adjacent elements is %d\n ",result);
    return 0;
}

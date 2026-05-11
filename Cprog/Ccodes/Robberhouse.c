#include<stdio.h>
int main()
{
    int n,i,incl,excl,newexcl,arr[100];
    printf("Enter the number:");
    scanf("%d",&n);
    printf("the %d elements are:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    incl=arr[0];
    excl=0;
    for(i=1;i<n;i++)
    {
        newexcl=(incl>excl)?incl:excl;
        incl=arr[i]+excl;
        excl=newexcl;
    }
    int result=(incl>excl)?incl:excl;
    printf("Maximum non-adjacent sum of a subarray is %d",result);
}

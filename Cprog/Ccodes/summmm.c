#include<stdio.h>
int main()
{
    int n,arr[100],i,sum=0;
    printf("Enter element\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }

    }
     printf("The sum of positive numbers are\n %d",sum);
     return 0;
}

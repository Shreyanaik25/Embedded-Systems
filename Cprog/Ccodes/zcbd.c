#include<stdio.h>
int main()
{
    int arr[100],*p,*end,*start,i,n,temp;
    printf("Enter the element:");
    scanf("%d",&n);
    printf("The %d element are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    start=arr;
    end=arr+n-1;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("Reversed array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

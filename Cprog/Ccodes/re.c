#include<stdio.h>
int main()
{
    int arr[100],i,n,*start=0,*end=0;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    start=arr;
    end=arr+n-1;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        *start++;
        *end--;
    }
    printf("Reverse array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}

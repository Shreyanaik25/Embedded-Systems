#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *start=arr;
    int *end=arr+n-1;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("The revesed array elements are: \n");
    int *p=arr;
    for(i=0;i<n;i++)
    {
        printf("%d\n",*p);
        p++;
    }
}

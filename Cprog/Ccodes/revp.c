#include<stdio.h>
int main()
{
    int arr[100],n,i,*start,*end,temp;
    printf("Enter elements\n");
    scanf("%d",&n);
    printf("%d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
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
    printf("Reverse array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;

}

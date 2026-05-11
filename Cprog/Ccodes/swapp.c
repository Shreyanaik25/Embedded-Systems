#include<stdio.h>
int main()
{
    int arr[100],n,i,start,end,temp;
    printf("Enter the elements:\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    start=0;
    end=n-1;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("Reversed array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number the elemsnts:\n");
    scanf("%d",&n);
    int i,arr[n];
    printf("Enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Elements %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Reversed array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}

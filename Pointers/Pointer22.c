#include<stdio.h>
void Reverse(int *,int );
int main()
{
    int arr[100],i,n;
    printf("Enter elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    Reverse(arr,n);
    return 0;
}
void Reverse(int *p,int n)
{
    int *start=p;
    int *end=p+n-1;
    while(start<end)
    {
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("Reversed elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*p);
        p++;
    }
}
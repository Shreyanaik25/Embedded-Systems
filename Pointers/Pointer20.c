#include<stdio.h>
void add(int *,int );
int main()
{
    int arr[100],i,n;
    printf("Enter elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    add(arr,n);
    return 0;
}
void add(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        *p+=5;
        printf("%d\n",*p);
        p++;
    }
}
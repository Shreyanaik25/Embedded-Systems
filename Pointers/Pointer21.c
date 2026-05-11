#include<stdio.h>
void findMax(int *, int );
int main()
{
    int arr[100],i,n;
    printf("Enter elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    findMax(arr,n);
    return 0;
}
void findMax(int *p, int n)
{
    int max=*p;
    int min=*p;
    for(int i=0;i<n;i++)
    {
        if(*p>max)
        {
            max=*p;
        }
        else if(*p<min)
        {
            min=*p;
        }
        p++;
    }
    printf("The max element of an array:%d\n",max);
    printf("The min element of an array:%d\n",min);
}
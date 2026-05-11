#include<stdio.h>
void countGreater(int *, int);
int main()
{
    int arr[100],i,n;
    printf("Enter the elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    countGreater(arr,n);  
}
void countGreater(int *p, int n)
{
    int count=0;
    printf("Printing the number of elements which are greater than 10 =");
    for(int i=0;i<n;i++)
    {
        if(*p>10)
        {
            count++;
        }
        p++;
    }
    printf("%d\n",count);
}
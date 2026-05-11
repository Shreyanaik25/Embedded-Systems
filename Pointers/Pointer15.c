#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter numbers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int first=*p;
    int second=*p;
    for(i=0;i<n;i++)
    {
        if(*p>first)
        {   
            second=first;
            first=*p;
        }
        else if(*p>second && *p!=first)
        {
            second=*p;
        }
        p++;
    
    }
    printf("The second largest element of an array :%d\n",second);


}
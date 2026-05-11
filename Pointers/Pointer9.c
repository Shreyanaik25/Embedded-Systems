#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *start=arr;
    int *end= arr+4;
    while(start < end)
     {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
     }
     int *p=arr;
     for(int i=0;i<5;i++)
     {
        printf("%d\n",*p);
        p++;
     }

    
}
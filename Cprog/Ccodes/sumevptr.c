#include<stdio.h>
int main()
{
    int arr[100],*ptr,n,evensum=0,i;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d element are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0;i<n;i++)
    {
        if(i%2!=0) // for odd positioned
        {
            evensum+=*(ptr+i);
        }
    }
    printf("The sum of even numbers =%d\n",evensum);
    return 0;
}

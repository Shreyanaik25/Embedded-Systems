#include<stdio.h>
int main()
{
    int arr[100],n,i,first,second;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    first=second=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]>first)
        {
             second=first;
             first=arr[i];
        }
        if(arr[i]>second && arr[i]!=first);
        {
            arr[i]=second;
        }
    }
    if(second == -1)
        printf("There is no second largest element.\n");
    else
        printf("The second largest element is: %d\n", second);

    return 0;
}

#include<stdio.h>
int main()
{
    int arr[100],i,n,index=0;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[index++]=arr[i];
        }
    }
    while(index<n)
    {
        arr[index++]=0;
    }
    printf("Array after moving all the zeros at end \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

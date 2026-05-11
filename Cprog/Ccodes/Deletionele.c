#include<stdio.h>
int main()
{
    int n,arr[100],i,pos;
    printf("Enter the element\n");
    scanf("%d",&n);
    printf("The %d element are \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to delete(from 0 to %d)\n",n-1);
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("Invalid Position \n");
    }
    else
    {
        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("Array after deletion\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
    }
}

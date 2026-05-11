#include<stdio.h>
int main()
{
    int arr[100],pos,n,i;
    printf("Enter the element");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of element you want to delete(form 0 to %d)\n",n-1);
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("Invalid Position\n");
    }
    else
    {
        for(i=pos;i<=n-1;i++)
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

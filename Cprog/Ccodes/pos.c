#include<stdio.h>
int main()
{
    int n,i,arr[100],pos,new_element;
    printf("Enter the element\n");
    scanf("%d",&n);
    printf("The %d elements are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position\n");
    scanf("%d",&pos);
    printf("Enter the element to insert\n");
    scanf("%d",&new_element);
    if(pos<0||pos>n)
    {
        printf("Invalid position\n");
        return 1;
    }
    for(i=n-1;i>=pos;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=new_element;
    n++;
    printf("Array after insertion\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

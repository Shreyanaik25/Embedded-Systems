#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int arr[100],i,n,*ptr;
    printf("enter element\n");
    scanf("%d",&n);
    printf("The %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr=arr;
    for(i=0;i<n-1;i+=2)
    {
        swap(ptr+i,ptr+i+1);
    }
    printf("Paried reverse\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

}

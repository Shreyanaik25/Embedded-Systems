#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("The value of x is %d\n",*x);
    printf("The value of y is %d\n",*y);
}
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Before swaping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("After swaping\n");
    swap(&a,&b);
    return 0;
}


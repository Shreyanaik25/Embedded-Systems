#include<stdio.h>
void update(int *ptr1,int *ptr2)
{
    int sum,diff;
    sum=*ptr1+*ptr2;
    diff=*ptr1-*ptr2;
    *ptr1=sum;
    *ptr2=diff;
    printf("The value of first number is %d\n",*ptr1);
    printf("the value of second number is %d\n",*ptr2);
}
int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    update(&a,&b);
    return 0;
}

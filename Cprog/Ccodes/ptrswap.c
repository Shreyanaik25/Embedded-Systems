#include<stdio.h>
int main()
{
    int a,b,*p1,*p2,temp;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("Value of a=%d\n",a);
    printf("Value of b=%d\n:",b);
    return 0;
}

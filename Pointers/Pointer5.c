#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("Value of a before swaping=%d\n",a);
    printf("Value of b before swaping=%d\n",b);
    int *p1=&a;
    int *p2=&b;
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("Value of a after swaping=%d\n",a);
    printf("Value of b after swaping=%d\n",b);

}
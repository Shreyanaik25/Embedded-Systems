#include<stdio.h>
int main()
{
    int a;
    int *p;
    printf("Enter the value of a:");
    scanf("%d",&a);
    p=&a;
    printf("The value of p=%p\n",p);
    printf("The address of a=%p\n",&a);
    printf("You enter %d\n",*p);
    return 0;
}

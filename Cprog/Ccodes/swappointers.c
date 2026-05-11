#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    int temp ,*ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("The value of a after swapping id %d\n",a);
    printf("The value of b after swapping is %d\n",b);
}

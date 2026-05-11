#include<stdio.h>
int main()
{
    int a;
    printf("Enter the vale of a :");
    scanf("%d",&a);
    int *ptr1=&a;
    int **ptr2=&ptr1;
    printf("The value of pointer to pointer is %d\n",**ptr2);
}

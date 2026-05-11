#include<stdio.h>
void largest(int a,int b);
int main()
{
    int a,b;
    printf("Enter the value of a& b\n");
    scanf("%d%d",&a,&b);
    largest(a,b);
    return 0;
}
void largest(int a,int b)
{
    if(a>b)
    {
        printf("The largest number is %d",a);
    }
    else
    {
        printf("The largest number is %d",b);
    }

}

#include<stdio.h>
void fibonacci();
int n;
void main()
{
    printf("Enter the terms:\n");
    scanf("%d",&n);
    fibonacci();
}
void fibonacci()
{
    int a=0,b=1,c;

    if(n<=0)
    {
        printf("Invalid input\n");
    }
    else if(n==1)
    {
        printf("Fibonacci sequence is :%d",a);
    }
    else
    {
        printf("Fibonacci sequence is %d\n",a,b);
        for(int i=2;i<n;i++)

        {
            c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
        }
        printf("\n");


}
}

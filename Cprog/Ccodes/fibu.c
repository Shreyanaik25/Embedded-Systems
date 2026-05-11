#include<stdio.h>
void fibo(int n)
{
    int first=0,second=1,i,next;
    for(i=0;i<=n;i++)
    {
        printf("%d",first);
        next=first+second;
        first=second;
        second=next;
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number you want the fibonacci series of:\n");
    scanf("%d",&n);
    fibo(n);
    return 0;

}

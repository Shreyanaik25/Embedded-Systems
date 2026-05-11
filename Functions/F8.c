#include<stdio.h>
int largest(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int result=largest(num);
    printf("result=%d\n",result);
    return 0;
}
int largest(int n)
{
    int largest=0,rem;
    while(n)
    {
        rem=n%10;
        if(rem>largest)
        {
           largest=rem;
        }
        n/=10;
    }
    return largest;
}
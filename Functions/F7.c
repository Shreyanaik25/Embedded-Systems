#include<stdio.h>
int SumEven(int);
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);
    int result=SumEven(num);
    printf("%d\n",result);
    return 0;
}
int SumEven(int n)
{
    int sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        if(rem%2==0)
        {
            sum+=rem;
            
        }
         n /= 10;
    }
    return sum;
}
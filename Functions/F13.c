#include<stdio.h>
int SecondLargest(int);
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int result=SecondLargest(num);
    printf("%d\n",result);
    return 0;
}
int SecondLargest(int  n)
{
    int rem,largest=-1,seclar=-1;
    while(n)
    {
        rem=n%10;
        if(rem>largest)
        {
            seclar=largest;
            largest=rem;
        }
        else if(rem>seclar && rem!=largest)
        {
            seclar=rem;
        }
        n/=10;
    }
    return seclar;
}
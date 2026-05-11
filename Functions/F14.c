#include<stdio.h>
int Armstrong(int);
int main()
{
      int num;
      printf("Enter number: ");
      scanf("%d",&num);
      int result=Armstrong(num);
      if(result==1)
      {
        printf("The number is Armstrong\n");
      }
      else
      {
        printf("The number is not Armstrong\n");
      }
}
int Armstrong(int n)
{
    int rem,cube,sum;
    int orignal=n;
    while(n)
    {
        rem=n%10;
        cube=rem*rem*rem;
        sum+=cube;
        n/=10;
    }
    if(sum==orignal)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
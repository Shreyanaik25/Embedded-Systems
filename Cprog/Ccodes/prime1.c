// C Program for Checking value is
// Prime or not
#include<stdio.h>
int main()
{
  int n=91,cnt=0;
  if(n<=1)
  {
    printf("Prime not found\n");
  }
  else
  {
    for(int i=0;i<=n;i++)
    {
      if(n%i==0)
      {
        printf("%d is prime number\n",n);
        cnt++;
      }
    }
  }
    if(cnt>2)
    {
      printf("%d is NOT prime\n",n);
    }
    else
    {
      printf("%d is prime",n);
    }
}






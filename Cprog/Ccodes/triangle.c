#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the value of three sides\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b>c && a+c>b && b+c>a)
  {
      printf("Valid Triangle\n");
      if(a==b && b==c)
      {
          printf("It is an equilateral triangle");
      }
      else if(a==b || b==c)
      {
          printf("It is an Isosceles triangle");
      }
      else
      {
          printf("It is a scalene triangle");
      }
  }
  else
  {
      printf("Invalid Triangle\n");

  }



}

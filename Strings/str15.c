#include<stdio.h>
int main()
{
    char str[100];
    int palindrome=1;
    printf("Enter string:");
    scanf(" %99[^\n]",str);
    int length=0,i=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    int j=length-1;
    i=0;
    while(i<j)
    {
      if(str[i]!=str[j])
      {
        palindrome=0;
        break;
      }
      i++;
      j--;
    }
   if(palindrome==1)
   {
    printf("The string is Palindrome\n");
   }
   else
   {
    printf("The string is not Palindrome\n");
   }
   return 0;
}
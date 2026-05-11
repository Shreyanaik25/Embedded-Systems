/*#include<stdio.h>
int main()
{
    int num,sum=0,digit;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        sum=sum+digit;
        num/=10;
    }
    printf("The sum of numbers is %d",sum);
}
*/
#include<stdio.h>
int main()
{
    int reversed=0,num,remainder,original;
    printf("Enter the number:\n");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    printf("The reversed number is %d",reversed);

}

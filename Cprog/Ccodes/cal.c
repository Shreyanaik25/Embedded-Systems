#include<stdio.h>
int main()
{
    char operator;
    int num1,num2,result;
    printf("Enter  number \n");
    scanf("%d",&num1);
    printf("Enter the operator you want to perform(+,-,*,/)");
    scanf(" %c",&operator);
     printf("Enter  number \n");
    scanf("%d",&num2);
    switch(operator)
    {
    case '+':
        result=num1+num2;
        printf("result=%d\n",result);
        break;
    case '-':
        result=num1-num2;
        printf("result=%d\n",result);
        break;
    case '*':
        result=num1*num2;
        printf("result=%d\n",result);
        break;
    case '/':
        result=num1/num2;
        printf("result=%d\n",result);
        break;
    default: printf("Invalid Operator\n");
    }
}


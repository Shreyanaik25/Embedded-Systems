#include<stdio.h>
int main()
{
    int i,num,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
     if (num == 0) {  // Special case: 0 has 1 digit
        printf("Number of digits = 1");
        return 0;
    }

    while(num!=0)
    {
         num/=10;
         count++;
    }
    printf("The number of digits are =%d",count);

}

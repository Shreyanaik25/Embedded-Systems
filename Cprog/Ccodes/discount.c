#include<stdio.h>
int main()
{
    int price;
    printf("Enter the price of the product\n");
    scanf("%d",&price);
    if(price<100)
    {
        printf("No discount");
    }
    else if(price>=100)
    {
        printf("10 percent discount");
    }
}

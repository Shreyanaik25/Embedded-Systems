#include<stdio.h>
#include<string.h>
struct book
{
    char title[100];
    int price;
    int pages;
};
int main()
{
    struct book b;
    printf("Enter title of book :");
    scanf("%s",b.title);
    printf("Enter the price of book :");
    scanf("%d",&b.price);
    printf("Enter the pages of the book :");
    scanf("%d",&b.pages);
    printf("Title of the book:%s\n",b.title);
    printf("Price of boook: %d\n",b.price);
    printf("Pages in the book :%d\n",b.pages);
}
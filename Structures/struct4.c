#include<stdio.h>
struct Book
{
   char title[100];
   int price;
};
int main()
{
    struct Book b;
    struct Book *p;
    p=&b;
    printf("Enter the title of the book:");
    scanf(" %[^\n]",p->title);
    printf("Enter price of the book:");
    scanf("%d",&p->price);
    printf("Title :%s",p->title);
    printf("Price : %d",p->price);
}

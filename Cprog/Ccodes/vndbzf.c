#include<stdio.h>
void menu();
void add(int,int);
void sub(int,int );
void multi(int,int);
int main()
{
    int choice,a,b;
    while(1)
    {
        printf("Enter the value of a& b\n");
        scanf("%d %d",&a,&b);
        while(1)
        {
            menu();
            printf("Enter your choice(1-3)\n");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:printf("You have selected addition\n");
                       add(a,b);
                       break;
                case 2:printf("You have selected substraction\n");
                       sub(a,b);
                       break;
                case 3:printf("you have selected multiplication\n");
                       multi(a,b);
                       break;
                case 4:printf("exiting the program.....\n");
                       break;
                case 5:printf("Rentering the value of a & b\n");
                       break;
                default:printf("Invalid choice\n");

            }
            if (choice == 5) break;
        }
    }
      return 0;
}
// Function definitions
void menu()
{
    printf("\nMenu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Exit\n");
    printf("5. Enter new values for a & b\n");
}

void add(int x, int y)
{
    printf("Sum = %d\n", x + y);
}

void sub(int x, int y)
{
    printf("Difference = %d\n", x - y);
}

void multi(int x, int y)
{
    printf("Product = %d\n", x * y);
}

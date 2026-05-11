#include<stdio.h>
int main()
{
    int BMI;
    printf("Enter the BMI weight\n");
    scanf("%d",&BMI);
    if(BMI<18.5)
    {
        printf("Underweight\n");
    }
    else if(18.5<=BMI<24.9)
    {
        printf("Normal");
    }
    else if(25<=BMI<29.9)
    {
        printf("Overweight");
    }
    else if(BMI>=30)
    {
        printf("Obese");
    }
}

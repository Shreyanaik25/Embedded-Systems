#include<stdio.h>
struct student
{
    char name[50];
    int age;
    int marks;
};
int main()
{
    int n;
    printf("Enter the strenght of class: ");
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name ,age ,marks:%d\n",i+1);
        scanf("%s %d %d",s[i].name,&s[i].age,&s[i].marks);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].marks<s[j+1].marks)
            {
                struct student temp;
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("Sorted Student according to Marks(Topper First):\n");
    for(int i=0;i<n;i++)
    {
        printf("Name: %s | Age: %d | Marks: %d\n",s[i].name,s[i].age,s[i].marks);
    }
    return 0;
}

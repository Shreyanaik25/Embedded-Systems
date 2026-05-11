#include<stdio.h>
struct student
{
    char name[50];
    int age;
    float marks;
};
int main()
{
    int n;
  printf("Enter the strenght of the student:");
  scanf("%d",&n);
  struct student s[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter student name,age,marks =%d\n",i+1);
    scanf("%s %d %f",s[i].name,&s[i].age,&s[i].marks);
  } 
  printf("Students data:\n"); 
  for(int i=0;i<n;i++)
  {
    printf("Name = %s | Age = %d | Marks = %g\n",s[i].name,s[i].age,s[i].marks);
  }
  return 0;
}
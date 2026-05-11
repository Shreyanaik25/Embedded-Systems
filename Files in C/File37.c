#include<stdio.h>
#include<string.h>
struct Employee
{
   char name[100];
   int id;
   int salary;
};
void Create_Employee()
{
    struct Employee e[100];
    int n;
    FILE *fp=fopen("Records.dat","wb");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return;
    }
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter Employee name :");
        scanf(" %[^\n]",e[i].name);
        printf("Enter Employee Id :");
        scanf("%d",&e[i].id);
        printf("Enter Employee salary :");
        scanf("%d",&e[i].salary);
        fwrite(&e[i],sizeof(e[i]),1,fp);
    }
    fclose(fp);
    printf("Created Employees Succesfully\n");
}
void Add_Employee()
{
    struct Employee e;
    FILE *fp=fopen("Records.dat","ab");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return;
    }
        printf("Enter Employee name :");
        scanf(" %[^\n]",e.name);
        printf("Enter Employee Id :");
        scanf("%d",&e.id);
        printf("Enter Employee salary :");
        scanf("%d",&e.salary);
        fwrite(&e,sizeof(e),1,fp);
        fclose(fp);
        printf("Employee Added succesfully\n");
}
void Delete_Contact()
{
    int choice;
    int found=0;
    struct Employee e;
    printf("1.Delete Employee by Name:\n");
    printf("2.Delete Employee by Id:\n");
    printf("3.Delete Employee by Salary:\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
                char deleteName[100];
                FILE *fp=fopen("Records.dat","rb");
                FILE *temp=fopen("temp.dat","wb");
                if(fp==NULL || temp== NULL)
                {
                    printf("File could not open.\n");
                    return ;
                }
                printf("Enter the name to delete: ");
                scanf(" %[^\n]",deleteName);
                while(fread(&e,sizeof(e),1,fp)==1)
                {
                    if(strcmp(e.name,deleteName)==0)
                    {
                        found=1;
                    }
                    else
                    {
                        fwrite(&e,sizeof(e),1,temp);
                    }
                }
            fclose(fp);
            fclose(temp);
            remove("Records.dat");
            rename("temp.dat","Records.dat");
    if(found==1)
    {
        printf("Employee deleted succesfully\n");
    }
    else
    {
        printf("Employee not found\n");
    }
    break;
    case 2: int ID;
            fp=fopen("Records.dat","rb");
            temp=fopen("temp.dat","wb");
            if(fp==NULL || temp==NULL)
            {
                printf("File could not open.\n");
            }
            printf("Enter the Id to delete:");
            scanf("%d",&ID);
            while(fread(&e,sizeof(e),1,fp)==1)
            {
                if(e.id==ID)
                {
                    found=1;
                }
                else
                {
                    fwrite(&e,sizeof(e),1,temp);
                }
            }
            fclose(fp);
            fclose(temp);
            remove("Records.dat");
            rename("temp.dat","Records.dat");
            if(found==1)
            {
                 printf("Employee Deleted Succesfully.\n");
            }
            else
            {
                printf("Employee not found\n");
            }
            break;
            case 3:int sal;
                  fp=fopen("Records.dat","rb");
                  temp=fopen("temp.dat","wb");
                  if(fp==NULL || temp==NULL)
                  {
                    printf("File could not open.\n");
                    return;
                  }
                  printf("Enter the Salary to delete:");
                  scanf("%d",&sal);
                  while(fread(&e,sizeof(e),1,fp)==1)
                  {
                    if(e.salary==sal)
                    {
                        found=1;
                    }
                    else
                    {
                        fwrite(&e,sizeof(e),1,temp);
                    }

                  }
                  fclose(fp);
                  fclose(temp);
                  remove("Records.dat");
                  rename("temp.dat","Records.dat");
                  if(found==1)
                  {
                    printf("Employee Deleted Succesfully\n");
                  }
                  else
                  {
                    printf("Employee not found.\n");
                  }
                  break;
                  default:printf("Invalid Choice.\n");
    }
}
void Search_Employee()
{
    int choice;
    char search[100];
    int found=0;
    struct Employee e;
    printf("1.Serach by Name:\n");
    printf("2.Serach by ID:\n");
    printf("3.Search by Salary:\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: FILE *fp=fopen("Records.dat","rb");
                if(fp==NULL)
                {
                    printf("File could not open.\n");
                    return;
                }
                printf("Enter the name to search:");
                scanf(" %[^\n]",search);
                while(fread(&e,sizeof(e),1,fp)==1)
                {
                    if(strcmp(e.name,search)==0)
                    {
                        printf("Employee found\n");
                        printf("Name: %s\n", e.name);
                        printf("Id: %d\n", e.id);
                        printf("Salary: %d\n", e.salary);
                        found=1;
                    }
                }
                fclose(fp);
                if(found==0)
                {
                    printf("Employee not found\n");
                }
                break;
        case 2: found=0;
                fp=fopen("Records.dat","rb");
                int ID;
                if(fp==NULL)
                {
                    printf("File could not open.\n");
                    return;
                }
                printf("Enter the ID to search:");
                scanf("%d",&ID);
                while(fread(&e,sizeof(e),1,fp)==1)
                {
                    if(e.id==ID)
                    {
                        printf("Employee found\n");
                        printf("Name: %s\n", e.name);
                        printf("Id: %d\n", e.id);
                        printf("Salary: %d\n", e.salary);
                        found=1;
                    }
                }
                fclose(fp);
                if(found==0)
                {
                    printf("Employee not found\n");
                }
                break;
        case 3: found=0;
                fp=fopen("Records.dat","rb");
                int sal;
                if(fp==NULL)
                {
                    printf("File could not open.\n");
                    return;
                }
                printf("Enter the salary to search:");
                scanf("%d",&sal);
                while(fread(&e,sizeof(e),1,fp)==1)
                {
                    if(e.salary==sal)
                    {
                        printf("Employee found\n");
                        printf("Name: %s\n", e.name);
                        printf("Id: %d\n", e.id);
                        printf("Salary: %d\n", e.salary);
                        found=1;
                    }
                }
                fclose(fp);
                if(found==0)
                {
                    printf("Employee not found\n");
                }
                break;
        default:printf("Invalid choice\n");
    }


}
void Update_Employee()
{
    struct Employee e;
    char updateName[100];
    int found = 0,ID,sal,choice;
    printf("1.Update by name:\n");
    printf("2.Update by ID:\n");
    printf("3.Update by Salary:\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            FILE *fp = fopen("Records.dat", "rb+");
            if (fp == NULL)
           {
                printf("File could not open.\n");
                return;
           }
            printf("Enter name to update: ");
            scanf(" %[^\n]", updateName);
            while (fread(&e, sizeof(e), 1, fp) == 1)
            {
            if (strcmp(e.name, updateName) == 0)
            {
                printf("Enter new employee name: ");
                scanf(" %[^\n]", e.name);

                printf("Enter new employee id: ");
                scanf("%d", &e.id);

                printf("Enter new employee salary: ");
                scanf("%d", &e.salary);

                fseek(fp, -sizeof(e), SEEK_CUR);
                fwrite(&e, sizeof(e), 1, fp);
                found = 1;
                 break;
            }
        }
        fclose(fp);
        if (found == 1)
        {
            printf("Employee updated successfully.\n");
        }
        else
        {
            printf("Employee not found.\n");
        }
        break;
    case 2: fp=fopen("Records.dat","rb");
            if(fp==NULL)
            {
                printf("File could not open.\n");
                return;
            }
            printf("Enter ID to update:");
            scanf("%d",&ID);
            while(fread(&e,sizeof(e),1,fp)==1)
            {
                if(e.id==ID)
                {
                    printf("Enter new Employee name:");
                    scanf(" %[^\n]",e.name);
                    printf("Enter new Employee id:");
                    scanf("%d",&e.id);
                    printf("Enter new employee salary:");
                    scanf("%d",&e.salary);
                    fseek(fp,-sizeof(e),SEEK_CUR);
                    fwrite(&e,sizeof(e),1,fp);
                    found=1;
                    break;
                }
            }
            fclose(fp);
            if(found==1)
            {
                printf("Employee Updated succesfully.\n");
            }
            else
            {
                printf("Employeee not found.\n");
            }
            break;
            case 3:
                fp=fopen("Records.dat","rb");
                if(fp==NULL)
                {
                    printf("File could not open.\n");
                    return;
                }
                printf("Enter the salary to update:");
                scanf("%d",&sal);
                while(fread(&e,sizeof(e),1,fp)==1)
                {
                    if(e.salary==sal)
                    {
                        printf("Enter new employee name:");
                        scanf(" %[^\n]",e.name);
                        printf("Enter new employee Id:");
                        scanf("%d",&e.id);
                        printf("Enter new employee salary:");
                        scanf("%d",&e.salary);
                        fseek(fp,-sizeof(e),SEEK_CUR);
                        fwrite(&e,sizeof(e),1,fp);
                        found=1;
                        break;
                    }
                }
                fclose(fp);
                if(found==1)
                {
                    printf("Employee Update Succesfully.\n");
                }
                else
                {
                    printf("Employee not found.\n");
                }
                break;
                default:printf("Invalid Choice\n");
    }
    
}
void Sort()
{
    struct Employee e[100],temp;
    int count=0;
    FILE *fp=fopen("Records.dat","rb");
    if(fp==NULL)
    {
       printf("File could not open.\n");
       return;
    }
    while(fread(&e[count],sizeof(e[count]),1,fp)==1)
    {
        count++;
    }
    fclose(fp);
    for(int i=0;i<count-1;i++)
    {
        for(int j=0;j<count-i-1;j++)
        {
            if (e[j].salary > e[j + 1].salary)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
        }
    }
    fp=fopen("Records.dat","wb");
    for(int i=0;i<count;i++)
    {
        fwrite(&e[i],sizeof(e[i]),1,fp);
    }
    fclose(fp);
    printf("Sorted succesfully by salary\n");

}

void Display()
{
    struct Employee e;
    FILE *fp=fopen("Records.dat","rb");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return;
    }
    while(fread(&e,sizeof(e),1,fp)==1)
    {
        printf("Name : %s\n",e.name);
        printf("Id : %d\n",e.id);
        printf("Salary : %d\n",e.salary);
    }
    fclose(fp);
}
int main()
{
    int choice;
    do
    {
     printf("-------Menu Driven---------\n");
     printf("1.Create Employees\n");
     printf("2.Add Employees\n");
     printf("3.Delete Employees\n");
     printf("4.Serach Employee\n");
     printf("5.Update data\n");
     printf("6.Diplay\n");
     printf("7.Sort\n");
     printf("8.Exit\n");
     printf("Enter your choice: ");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1: Create_Employee();
                break;
        case 2: Add_Employee();
                break;
        case 3: Delete_Contact();
                break;
        case 4: Search_Employee();
                break;
        case 5: Update_Employee();
                break;
        case 6: Display();
                break;
        case 7: Sort();
                break;
        case 8: printf("Exiting----\n");
                break;
        default: printf("Invalid Choice\n");
    }
    while (choice != 8);

return 0;
}


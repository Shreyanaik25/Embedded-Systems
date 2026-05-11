#include<stdio.h>
int main()
{
    int arr[100],n,i,pos,new_element,choice;
    printf("Enter elements \n");
    scanf("%d",&n);
    printf("The %d elements are \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(1)
    {
    printf("Menu\n");
    printf("1.Insertion\n");
    printf("2.Deletion\n");
    printf("3.Exit\n");
    printf("Enter your choice Insertion or Deletion\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the Element to insert\n");
        scanf("%d",&new_element);
        printf("Enter the position where you want to insert\n");
        scanf("%d",&pos);
        if(pos<0||pos>n)
        {
            printf("Invalid position!\n");
            return 1;
        }
        for(i=n-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=new_element;
        n++;
        printf("Array after insertion\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
        break;
    case 2:
        printf("Enter the postion which you want to delete\n");
        scanf("%d",&pos);
        if(pos<0||pos>n)
        {
            printf("Invalid Position!\n");
        }
        else
        {
            for(i=pos;i<n-1;i++)
            {
                arr[i]=arr[i+1];
            }
            n--;
            printf("Array after deletion\n");
            for(i=0;i<n;i++)
            {
                printf("%d\n",arr[i]);
            }
        }
        break;
    case 3:
        printf("Exiting from program\n");
        return 0;
    default:
        printf("Invalid choice.Please again\n");

    }
    printf("Updated array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
return 0;
}

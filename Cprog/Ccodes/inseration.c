#include<stdio.h>
int main()
{
    int n,arr[100],i,pos,new_ele;
    char choice,Y,y;
    printf("Enter the element\n");
    scanf("%d",&n);
    printf("The %d element are\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {
        printf("Enter the element to insert\n");
        scanf("%d",&new_ele);
        printf("Enter the position to insert\n");
        scanf("%d",&pos);
        if(pos<0||pos>n)
        {
            printf("Invalid Position!\n");
            return 1;
        }
        for(i=n-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=new_ele;
        n++;

        printf("Printing an array after insertion\n");
        for(i=0;i<n;i++)
        {
            printf("%d\n",arr[i]);
        }
        printf("Do you want to insert again? (Y/N)\n");
        scanf(" %c",&choice);

    }
    while(choice=='Y'||choice=='y');
        return 0;

}

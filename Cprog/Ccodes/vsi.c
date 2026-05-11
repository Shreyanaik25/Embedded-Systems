#include<stdio.h>
int main()
{
    int arr[100],n,i,search,found;
    char choice,Y,y;
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("The %d elements are \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {
        found=0;
        printf("Enter the element to be searched\n");
        scanf("%d",&search);
        for(i=0;i<n;i++)
        {
            if(arr[i]==search)
            {
                printf("%d is found at index arr[%d]\n",search,i);
                found=1;
            }
        }
        if(!found)
        {
            printf("%d not found in an array\n",search);
        }
        printf("Do you want to search again(Y/N)\n");
        scanf(" %c",&choice);
    }
    while(choice=='Y'||choice=='y');
    return 0;

}

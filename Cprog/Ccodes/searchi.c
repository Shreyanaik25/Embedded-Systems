#include<stdio.h>
int main()
{
    int n,key,arr[100],i,found=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("The %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to be search:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key){

            printf("The element %d found at %d\n ",key,i);
            found=1;
            break;
        }
    }
    if(!found)
{
    printf("The %d element not found",key);

}
}



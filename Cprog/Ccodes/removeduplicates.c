#include<stdio.h>
int main()
{
    int n,i,j,k,temp,arr[100];
     printf("Enter the element:");
    scanf("%d",&n);
    printf("The %d elemets are:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    k=0;
     for(i=0;i<n-1;i++)
     {
         if(arr[i]!=arr[i+1])
         {
             arr[k]=arr[i];
             k++;
             for(i=0;i<k;i++)
             {
                 printf("%d\n",arr[i]);
             }


}
     }

}

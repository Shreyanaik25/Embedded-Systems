/*#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter how many numbers you want to print:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}
*/
/*#include<stdio.h>
int main()
{
    int i=1,n;
    printf("How many numbers does you want to print\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the numbers you want sum of:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("The sum of %d numbers is %d",n,sum);
    return 0;
}

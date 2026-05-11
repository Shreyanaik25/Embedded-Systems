/*#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of which you multipication of:\n");
    scanf("%d",&n);
    for(i=1;i<=20;i++)
    {
        printf("%d X %d=%d\n",n,i,n*i);
    }

}
*/
#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the number you the multuplication of:\n");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d X %d=%d\n",n,i,n*i);
        i++;
    }
}

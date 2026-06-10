// Print number pyramid
#include<stdio.h>
int main()
{
    int i,j,n,space,num;//n is number of rows
    printf("Enter the number of rows\n");//n=5  is taken in question
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {
            printf(" ");
        }
        for(num=1;num<=i;num++)
        {
            printf("%d",num);//Print increasing numbers from 1 to i
        }
        for(num=i-1;num>=1;num--)
        {
            printf("%d",num);// Print decreasing numbers from i-1 down to 1
        }
        printf("\n");
    }
    return 0;
}
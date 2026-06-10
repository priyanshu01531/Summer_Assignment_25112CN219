// reverse star pyramid
#include<stdio.h>
int main()
{
    int i,j,n,space;//n is number of rows
    printf("Enter the number of rows\n");//n=5  is taken in question
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(space=n-i;space>=1;space--)
        {
            printf(" ");
        }
        for(j=2*i-1;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
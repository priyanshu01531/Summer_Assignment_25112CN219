#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("\nEnter value of N\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
     printf("\n Sum = %d",sum);
    return 0;
}
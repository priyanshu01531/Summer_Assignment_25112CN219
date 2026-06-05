//Strong Number checking
#include<stdio.h>
int main()
{
    int n,i,sum=0,fact=1,temp,rem;
    printf("Enter a number to check it is strong number or not\n");
    scanf("%d",&n);
    temp=n;//store number temperiorly
    while(n>0)
    {
        rem=n%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        fact=1;//as fact changes so we give fact =1 so process does not accect from it
        n=n/10;//remove the last digit of number
    }
    if(sum==temp)
    {
        printf("It is a Strong Number");
    }
    else
    {
        printf("It is not a Strong Number");
    }
    return 0;
}
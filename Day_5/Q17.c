//check perfect number
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number to check perfect number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)// check number is divisor of number or not
        {
            sum=sum+i;//add if number is divisor of entered number
        }
    }
    if(sum==n)
    {
        printf("Number is Perfect Number");
    }
    else
    {
        printf("Number is not Perfect Number"); 
    }
    return 0;
}
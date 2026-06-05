//print factors of a number
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Factors of entered number are\n");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)// check number is divisor of number or not
        {
           printf("%d\n",i);
        }
    }
    return 0;
}
   
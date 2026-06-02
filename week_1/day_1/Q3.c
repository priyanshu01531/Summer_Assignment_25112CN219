//Factorial of Number
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("\nEnter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial=%d\n",fact);
    return 0;
}
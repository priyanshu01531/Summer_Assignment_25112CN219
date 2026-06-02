//For Count the Digits of Integers
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a integer\n");
    scanf("%d",&n);
    while(n>0)
    {
        n/=10;
        count++;
    }
    printf("Number of digits=%d\n",count);
    return 0;
}
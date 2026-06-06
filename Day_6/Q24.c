//power calculation
#include<stdio.h>
int main()
{
    int i,a,b,res=1;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        res=res*a;
    }
    printf("%d to the power of %d=%d",a,b,res);
    return 0;
}
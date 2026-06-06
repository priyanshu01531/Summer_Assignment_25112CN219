//Decimal to Binary
#include<stdio.h>
int main()
{
    int n,b[10],i=0,rem;
    printf("Eneter the deimal Number\n");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        b[i]=rem;
        n=n/2;
        i++;
    }
    printf("Binary=");
    for(int j=i-1;j>=0;j--)
    {
      printf("%d",b[j]);
    }
    return 0;
}
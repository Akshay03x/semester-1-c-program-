#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(isPrime(n)==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}
int isPrime(int n)
{
    int count=0,i=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

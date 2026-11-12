#include<stdio.h>
int main()
{
    int n,n1,temp,sum=0;
    printf("Enter a number for armstrong check : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        n1=n%10;
        n1=n1*n1*n1;
        sum+=n1;
        n=n/10;
    }
    n=temp;
    if(sum==n)
    {
        printf("%d is an armstrong number.",n);
    }
    else
    {
        printf("%d is not an armstrong number.",n);
    }
    return 0;
}
#include<stdio.h>
main()
{
    int x,a,b,c,e;
    scanf("%d",&x);
    a=x%10;
    e=x/10;
    b=e%10;
    c=e/10;

    if(a%2==0 &&b%2==0 && c%2==0)
    {
        printf("Even");
    }
    else if(a%2==1 && b%2==1 && c%2==1)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}
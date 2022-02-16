#include<stdio.h>
int main()
{
    int x,i,sum=0,r,fact=1,num;
    scanf("%d",&x);
    num=x;
    while(x>0)
    {
        r=x%10;
        fact=1;
        for(i=1;i<=r;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        x=x/10;
    }
    if(num==sum)
    {
        printf("The number %d is a strong number ",num);
    }
    else
    {
        printf("The number %d is not a strong number",num);
    }
}
#include<stdio.h>

int reverse(int num)
{
	int r,rev=0;
	while (num)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
		
	}
	return rev;
	
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i;
    for(i=a;i<=b;i++)
    {
        if(i==reverse(i))
        {
            printf("%d ",i);
        }
    }
}
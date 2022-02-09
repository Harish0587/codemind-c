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
    int x;
    scanf("%d",&x);
    do
    {
        x+=reverse(x);
    }
    while(x!=reverse(x));
    printf("%d",x);
}
	
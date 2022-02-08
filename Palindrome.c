#include<stdio.h>
int main()
{
	int r,n,palindrome,reverse=0,checking;
	scanf("%d",&n);
	checking=n;
	while (n)
	{
		r=n%10;
		reverse=reverse*10+r;
		n=n/10;
	}
	if(checking==reverse)
	
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
	
	
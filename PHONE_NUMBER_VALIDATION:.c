#include<stdio.h>
#include<math.h>
int main()
{
    long int n,c=0;
    scanf("%ld",&n);
    c=log10(n)+1;
    if(c==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
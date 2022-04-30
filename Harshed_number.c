#include<stdio.h>
int main()
{
    int number,original_number,sum=0;
    int digit;
    scanf("%d",&original_number);
    number=original_number;
    while(number!=0)
    {
        digit=number%10;
        sum+=digit;
        number=number/10;
    }
    if(original_number%sum==0)
        printf("True");
    else
        printf("False");
 
    return 0;
}
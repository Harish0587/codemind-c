#include<stdio.h>
int main()
{
   int reminder, sum=0, i, originalNum;
    scanf("%d",&originalNum);
    for (i = 1; i <= originalNum/2; i++)
        {
            reminder = originalNum % i;
	        if (reminder == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == originalNum)
            printf("True");
        else
            printf("False");
} 
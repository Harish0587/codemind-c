#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]%*c",str);
    int n=strlen(str),i;
    for(i=n-1;i>=0;i--)
    {
       printf("%c",str[i]); 
    }
}
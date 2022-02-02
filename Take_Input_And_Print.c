#include<stdio.h>
int main()
{
    char name[30];
    fgets(name, sizeof(name), stdin);
    puts(name);
}
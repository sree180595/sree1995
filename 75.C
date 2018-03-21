#include<stdio.h>
void main()
{
char str[10];
int n;
printf("enter the string:");
scanf("%s",&str);
n=strlen(str);
if(n%2==0)
{
str[(n/2-1)]='*';
str[n/2]='*';
}
else
{
str[n/2]='*';
}
printf("%s",str);
getch();
return 0;
}

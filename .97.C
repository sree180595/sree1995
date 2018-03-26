#include<stdio.h>
int main()
{
int a=345,r,s=0;
do
{
r=a%2;
s=s+r*10;
a=a/10;
}while(a!=0);
printf("Reverse order is %d",s);
return 0;
}

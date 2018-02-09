#include<stdio.h>
void main()
{
int a,n,count=0;
scanf("%d",&a);
for(n=2;n<a;n++)
{
if(a%n==0)
count++;
}
if(count==0)
printf("prime number\n");
else
printf("not a prime number\n");
return0
}

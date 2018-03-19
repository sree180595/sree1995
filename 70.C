#include<stdio.h>
int main()
{
int a,b,c,d,i;
printf("enter a number");
scanf("%d",&a);
for(i=0;i<n;i++)
{
b=pow(2,i);
if(b>a)
{
c=i;
break;
}
}
d=pow(2,c);
printf("\n%d",d);
return 0;
}

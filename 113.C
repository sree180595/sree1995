#include<stdio.h>
int main()
{
int a[50],b,c,i,count=0;
scanf("%d%d",&b,&c);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
if(a[i]==c)
{
count++;
}
}
printf("%d time",count);
return 0;
}

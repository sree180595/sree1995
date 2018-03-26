#include <stdio.h>

void main()
{
int a,b[100],c,i,n;
printf("enter the numbers:");
scanf("%d\t%d",&a,&c);
for(i=0;i<100;i++)
{
	scanf("%d",&b[i]);
	n++;
}
for(i=0;i<n-1;i++)
{
if(c==b[i])	
{
printf("\n%d",b[i]);	
}
}
getch();
	
}

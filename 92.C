#include <stdio.h>

void main()
{
int a,b[100],c=0,i;
printf("enter the numbers:");
scanf("%d",&a);
for(i=0;i<a;i++)
{
	scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
c=c+b[i];

}
printf("\n%d",c);	
getch();
}

#include<stdio.h>
void main()
{
int a,b,t;
printf("enter 2 number");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("%d%d",a,b);
getch();
}

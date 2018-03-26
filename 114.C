#include<stdio.h>
int main()
{
int n,k,i,j;
int a[100],c=0;
printf("enter n and k values:");
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
{
c++;
}
if(c==k)
{
printf("odd number is \n%d",a[i]);

break;
}
}
getch();
return 0;

}

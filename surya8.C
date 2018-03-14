#include<stdio.h>
void main()
{
    int f1=0,f2=1,f,n,i;
    scanf("%d",&n);
    printf("%d\t%d\t",f1,f2);
    for(i=2;i<n;i++)
{     f=f1+f2;
       f1=f2;
       f2=f;
       printf("%d\t",f);
}
    
}

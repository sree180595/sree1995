#include<stdio.h>
void main()
{
    int n,m,res;
    scanf("%d",&n);
    scanf("%d",&m);
    res=n*m;
    if(res%2==0)
    {
        printf("%d is even",res);
    }
    else
    {
        printf("%d is odd",res);
    }
    getch();
    return 0;
}

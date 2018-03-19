#include<stdio.h>
void main()
{
    int n,num;
    scanf("%d",&num);
    n=num+1;
    while(n!=0)
    {
        if(n%10==0)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
    getch();
    return 0;
}

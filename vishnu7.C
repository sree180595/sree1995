#include <stdio.h>
void main() 
{
	int num,flag=0,temp;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp!=1)
	{
		if(temp%2!=0)
		{
			flag=1;
			break;
			
		}
		temp=temp/2;
	}
	if(flag==0)
	{
		printf("\n %d is a power of 2",num);
	}
	else if(flag==1)
	{
		printf("\n %d is not a power of 2",num);
	}
  getch();
	return 0;
}

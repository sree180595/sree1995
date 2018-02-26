#include<stdio.h>
int main()
{
	int a,b;
	printf("ENTER THE INPUT INTEGERS:\n");
	scanf("%d%d",&a,&b);
	printf("BEFORE SWAPPING:\n");
	printf("a=%d\nb=%d",a,b);
	a=a ^ b;
	b=a ^ b;
	a=a ^ b;
	printf("\nAFTER SWAPPING:\n");
	printf("a=%d\nb=%d",a,b);
  return();
	}

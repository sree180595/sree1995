#include <stdio.h>
#include<conio.h>
int main() 
{
	char a[50];
	int i,count=0,m;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]!=' ')
		count++;	
	}
	printf("%d",count);
	return 0;
}

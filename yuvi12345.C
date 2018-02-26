#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int n,i,count=1;
	printf("ENTER THE INPUT SENTENCE:\n");
	gets(a);
	n=strlen(a);
	printf("\nTHE LENGTH OF SENTENCE IS %d",n);
	for(i=0;i<n;i++)
	{
		if(a[i]=='\.')
		{
			count++;
		}
	}
	printf("\nTHE NO.OF.LINES IN THE GIVEN PARAGRAPH ARE %d",count);
}

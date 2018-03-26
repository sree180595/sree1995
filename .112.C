#include<stdio.h>
int main()
{
	int n,k,a[100],i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("%d exist in array",k);
			return(0);
		}
	}
	printf("%d does not exist",k);	
  return 0;
}

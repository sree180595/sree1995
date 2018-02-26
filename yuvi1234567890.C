#include<stdio.h>
void main()
{
	int a[20],n,i,j,t;
	printf("ENTER THE NO.OF.ELEMENTS:\n");
	scanf("%d",&n);
	printf("ENTER THE ELEMENTS:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	}
	printf("THE LARGEST ELEMENT IN THE ARRAY IS %d",a[0]);	
	}

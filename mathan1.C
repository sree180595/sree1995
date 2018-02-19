#include<stdio.h>
int main() 
{
  int i,n;
  int a[100];
  printf("enter the 1 to 100");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    printf("the number is:"i+1);
    scanf("%d",&a[i]);
  }
  for(i=0;i<=n;i++)
  {
    if(a[0]>a[i])
      a[0]=a[i];
  }
  printf("the smallest element is%d",a[0]);
  return0
}

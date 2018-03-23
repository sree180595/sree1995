#include<stdio.h>
main()
{
  int num,n;
  printf("enter a number");
  scanf("%d",&num);
  while(num!=0)
  {
      do
      {
      m=num%13
      }
      if(m==0)
      {
       printf("multiple of 13");
       }
       else
       {
       printf("not a multiple of 13");
       }
       }
   return 0;    
       }

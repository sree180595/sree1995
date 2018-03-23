
#include<stdio.h>
int main()
{

               int num,rem,odd=0,digit;

               printf("  Enter an integer number: ");

               scanf("%d",&num);

               printf("\n  The Odd digits present in %d are \n",num);

               while(num>0)
               {

               digit = num % 10;

               num = num / 10;

               rem = digit % 2;

               if(rem != 0)

               printf("\n  %d.",digit);

               }

        getch();

    } 

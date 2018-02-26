#include <stdio.h>
#include <conio.h>
void main()
{
char s[100];
int count=0,i;
clrscr();
printf("\n Enter the sentence:");
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count++;    
}
printf("\n Number of words are: %d",count+1);
getch();
return 0;
}

#include <stdio.h>
void main()
{
  float n;
  int d;
  scanf("%f",&n);
  if(n<0)
  d=(int)(n-0.5);
  else
  d=(int)(n+0.5);
  printf("%d",d);
getch();
return 0;
}

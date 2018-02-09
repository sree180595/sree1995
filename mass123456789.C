#include<stdio.h>
void main()
def odd(a,b):
	if((a%2)==0):
		if(abs(b-a)==1 or abs(b-a)==0):
			print("no odd numbers")
		a=a+1
		while(a!=b and a!=(b+1)):
			print(a)
			a=a+2
	else:
		if(abs(b-a)==2 or abs(b-a)==1):
			print("no odd numbers")
		a=a+2
		while(a!=b and a!=(b+1)):
			print(a)
			a=a+2
a,b=[int(x) for x in raw_input().split(",")]
if(a<b):
	odd(a,b)
			
elif(a>b):
	temp=a
	a=b
	b=temp
	odd(a,b)
else:
	odd(a,b)
return0

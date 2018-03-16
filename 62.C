b=raw_input()
flag=0
{
for c in b:
	if((c == '0') or (c == '1')):
		flag+=1
if(flag==(len(b))):
	print("yes")
else:
	print("no")
  }

DATA = [10,12,20,50,30,60]
N = 5
LOC=0
k=1
item=10
flag=0

for i in range(5):
	# print(i)
	if DATA[i]==item:
		flag=1
if flag==1:
	print("found")
else:
	print("not found")
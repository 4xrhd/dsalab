

DATA = [10,12,20,50,30,20]
N = 5
LOC=0
k=1
print(DATA)
ITEM=int(input("Enter the item to search for:"))

for k in range(N):
	if(DATA[k]==ITEM):
		LOC = k+1
		break;

if LOC == 0:
	print("ITEM not in array data")
else:
	
	print("Loc is found in location",LOC)

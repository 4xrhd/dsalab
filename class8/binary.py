data = [90,10,23,30,40,72,90,80,78]
data.sort()

print("Before search: ",data)
item=int(input("Enter item want to search:"))
beg= 0
end = len(data)-1
loc=None
i=0
for i in range(end):
        mid= (beg +end )//2
        if data[mid]==item:
                loc=mid
                print("found at location: ",loc+1)
                break
        elif item < data[mid]:

                end=mid-1
        else:
                beg=mid+1
if loc==None:
        print("Not Found")
#write an recursive function to calculate (a^b) (a raised to the power of b)

def recurs(a, b):

    if b == 0:
        return 1
    
    else:
        return a * recurs(a, b - 1)
aa=int(input("Enter a:"))
bb=int(input("Enter b:"))

result = recurs(aa,bb)
print(result) 
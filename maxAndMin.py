ma=int()
mi=int()
while True:
    x=input()
    x=int(x)
    if x==-1:
        break

    if x>ma:
        ma=x

    if x<mi:
        mi=x

print("Max",ma)      
print("Mi",mi)  

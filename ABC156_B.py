n,k=(int (x) for x in input().split())
for i in range(30):
    if((k**i<=n)&(n<k**(i+1))):
        break
print(i+1)
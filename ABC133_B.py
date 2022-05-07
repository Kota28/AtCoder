n,d=map(int,input().split())
x=[list(map(int,input().split())) for _ in range (n)]
ans=0

def distance(a,b):
    d=0
    for i in range(len(a)):
        d+=abs(a[i]-b[i])**2
    return d
    
def check(a,b):
    f=0
    for i in range(1000):
        if distance(a,b)==i**2:
            f+=1
            break
        else:
            f=f
    if f>0:
        return True
    else:
        return False
            
    
for i in range(n):
    for j in range(i+1,n):
        if check(x[i],x[j]):
            ans+=1
print(ans)

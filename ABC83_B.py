n,a,b=map(int,input().split())

def keta(n):
    s=0
    while(n>0):
        s+=n%10
        n=n//10
    return s

ans=0
for i in range(a,n+1):
    if(a<=keta(i)&keta(i)<=b):
        ans+=i

print(ans)
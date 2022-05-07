n,X=map(int,input().split())
x = list(map(int, input().split()))

def gcd(a,b):
    while b:
        a,b=b,a%b
    return a
ans=abs(X-x[0])
for i in range(1,n):
    ans=gcd(ans,abs(X-x[i]))
print(ans)
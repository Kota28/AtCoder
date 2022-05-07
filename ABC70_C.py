import fractions
n=int(input())
t=[int(input()) for _ in range(n)]

ans=t[0]

def lcm(x,y):
    return (x*y)//fractions.gcd(x,y)

for i in range(1,n):
    ans=lcm(ans,t[i])
print(ans)
    
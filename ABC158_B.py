n,a,b=(int (x) for x in input().split())
sho=n//(a+b)
amari=n%(a+b)
pre=min(amari,a)
ans=a*sho+pre
print(ans)
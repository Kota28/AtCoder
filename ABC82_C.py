n=int(input())
a= list(map(int, input().split()))
c=[0 for _ in range(1000000000)]
ans=0
for i in range(len(a)):
    c[a[i]]+=1
for i in range(len(c)):
    if(0<c[i]<i):
        ans+=c[i]
    elif(i<c[i]):
        ans+=c[i]-i
print(ans)
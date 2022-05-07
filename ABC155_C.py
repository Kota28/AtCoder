n=int(input())
a=list(map(int,input().split()))
b=[]
ans='DENIED'
for i in range(len(a)):
    if(a[i]%2==0):
        b.append(a[i])
f=0
for i in range(len(b)):
    if((b[i]%3==0)|(b[i]%5==0)):
        f+=1
if(f==len(b)):
    ans='APPROVED'
print(ans)
n=int(input())
t,a=map(int,input().split())
h=list(map(int,input().split()))
temp=[]
pre=[]
ans=1e3
for i in range(n):
    temp.append(t-h[i]*0.006)
    pre.append(abs(temp[i]-a))
    ans=min(ans,pre[i])
for i in range(n):
    if(ans==pre[i]):
        pri=i
        break
print(pri+1)

n=int(input())
a= [ list(map(int,input().split(" "))) for i in range(2)]
up=[0]*n
down=[0]*n
up[0]=a[0][0]
sum_down=0
for i in range(n):
    sum_down+=a[1][i]
down[0]=sum_down
for i in range(1,n):
    up[i]=a[0][i]+up[i-1]
    down[i]=down[i-1]-a[1][i-1]
ans=[]
for i in range(n):
    pre=0
    pre+=up[i]+down[i]
    ans.append(pre)
print(max(ans))
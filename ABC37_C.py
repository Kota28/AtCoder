n,k = map(int,input().split())
a= list(map(int,input().split()))
a=[0]+a
sum=[0]*(n+1)
ans=0
##for i in range(len(a)):
    ##print(a[i])
for i in range(1,n+1):
    sum[i]=sum[i-1]+a[i]
##for i in range(n+1):
    ##print(sum[i])
for i in range(1,n-k+2):
    ans+=sum[i+k-1]-sum[i-1]
print(ans)
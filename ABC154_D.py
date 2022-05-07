N,K=map(int,input().split())
p=list(map(int,input().split()))
ave=[0]*(N-K+1)
tmp=0
for i in range(K):
    tmp+=(p[i]+1)/2
ave[0]=tmp
for i in range(1,N-K+1):
    ave[i]=ave[i-1]-(p[i-1]+1)/2 + (p[i+K-1]+1)/2
print(max(ave))

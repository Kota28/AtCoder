from scipy.special import comb
n=int(input())
a=list(map(int,input().split()))
b=[0]*max(a)
for i in range(len(a)):
    b[a[i]-1]+=1
for i in range(len(a)):
    ans=0
    b[a[i]-1]-=1
    for j in range(len(b)):
        if b[j]<2:
            ans=ans
        else:
            ans+=comb(b[j],2)
    print(ans)
    b[a[i]-1]+=1
    
        

import math
def solve():
    n=int(input())
    x=list(map(int,input().split()))
    
    ave=0
    sum=0
    for i in range(len(x)):
        sum+=x[i]
    ave=sum/len(x)
    if ave>math.floor(ave)+0.5:
        pre=math.ceil(ave)
    else:
        pre=math.floor(ave)
    ans=0
    for i in range(len(x)):
        ans+=(x[i]-pre)**2
    print(ans)
    
solve()
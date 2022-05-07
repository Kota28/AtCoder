n=int(input())
s=input()
ans=0
for i in range(1,n-1):
    for j in range(i+1,n):
        for k in range(j+1,n+1):
            if 2*j==k+i:
                continue
            else:
                if((s[i-1]!=s[j-1])&(s[j-1]!=s[k-1])&(s[i-1]!=s[k-1])):
                    ans+=1
print(ans)
s=input()
ans=0
if len(s)%2==0:
    for i in range(len(s)//2):
        ans+=int(s[2*i])
    for i in range(len(s)//2):
        ans-=int(s[2*i+1])
else:
    for i in range((len(s)+1)//2):
        ans+=int(s[2*i])
    for i in range((len(s)-1)//2):
        ans-=int(s[2*i+1])
print(ans)
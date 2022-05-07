n=int(input())
s=[int(input()) for _ in range(n)]
score=sum(s)
t=[i for i in s if i%10!=0]
t.sort()
    
if score%10!=0:
    print(score)
else:
    if len(t)==0:
        print(0)
    else:
        print(score-t[0])
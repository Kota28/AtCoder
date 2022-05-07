s=input()
scnt,ncnt,wcnt,ecnt=0,0,0,0
for i in range(len(s)):
    if(s[i]=='S'):
        scnt+=1
    elif(s[i]=='N'):
        ncnt+=1
    elif(s[i]=='E'):
        ecnt+=1
    elif(s[i]=='W'):
        wcnt+=1
if((scnt!=0 and ncnt==0) or (scnt==0 and ncnt!=0) or (wcnt>0 and ecnt==0) or (wcnt==0 and ecnt>0)):
    print("No")
else:
    print("Yes")
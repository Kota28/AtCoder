str=str(input())
a=[]
for i in range(0,len(str)-2):
    t=int(str[i]+str[i+1]+str[i+2])
    a.append(abs(753-t))
print(min(a))

    
    
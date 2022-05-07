import collections
n=int(input())
a=[]
ans=0
if n<357:
    print(0)
else:
    for i in range(357,n):
        s=str(i)
        c=collections.Counter(s)
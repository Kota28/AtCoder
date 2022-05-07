import math
a,b,c,d= map(int, input().split())
n=math.ceil(c/b)
m=math.ceil(a/d)
if n>m:
    print('No')
else:
    print('Yes')
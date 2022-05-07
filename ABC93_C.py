c=list(map(int,input().split()))
m=max(c)
c.remove(m)
if c[0]%2!=c[1]%2:
    print((3*(m+1)-c[0]-c[1]-m)//2)
else:
    print((3*m+-c[0]-c[1]-m)//2)
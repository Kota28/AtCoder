n=int(input())
top=0
for i in range(n):
    a,b,c,d,e=map(int,input().split())
    top=max(top,a+b+c+d+e*110/900)
print(top)
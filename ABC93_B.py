a,b,k=map(int,input().split())
if(2*k<=(b-a)):
    for i in range(k):
        print(a+i)
    for i in range(k)[::-1]:
        print(b-i)
else:
    for i in range(b-a+1):
        print(a+i)
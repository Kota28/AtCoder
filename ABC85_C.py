n,y=map(int,input().split())
for i in range(n+1):
    y_=y-10000*i
    for j in range(n-i+1):
        y__=y_-5000*j
        if y__//1000==n-i-j:
            print(i,j,n-i-j)
            exit()
print(-1,-1,-1)

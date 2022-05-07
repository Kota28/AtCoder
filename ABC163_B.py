n,m=map(int,input().split())
a= list(map(int, input().split())) #i_1 i_2を取得し、iに値を入れる
sum=0
for i in range(m):
    sum+=a[i]
if n>=sum:
    print(n-sum)
else:
    print(-1)
n,x=map(int, input().split()) #i_1 i_2を取得し、iに値を入れる
l= list(map(int, input().split())) #i_1 i_2を取得し、iに値を入れる
sum=0
cnt=1
for i in range(len(l)):
    if sum<x:
        sum+=l[i]
        cnt+=1
    else:
        break
if sum>x:
    print(cnt-1)
else:
    print(cnt)
n,k=map(int, input().split()) #i_1 i_2を取得し、iに値を入れる
s=set()
for i in range(k):
    d=int(input())
    for j in range(d):
        a=list(map(int, input().split()))
    for l in range(d):
        s.add(a[l])
print(n-s.count())        
        
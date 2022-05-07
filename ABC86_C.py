n=int(input())
txy = [list(map(int,input().split())) for _ in range(n)]
f=0
for i in range(n):
    if(txy[i][0]<txy[i][1]+txy[i][2] or txy[i][0]%2!=(txy[i][1]+txy[i][2])%2):
        f=1
        print("No")
        break
if f==0:
    print("Yes")
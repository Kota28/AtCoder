c=[list(map(int,input().split())) for _ in range(3)]
a=[0]*3
b=[0]*3
b[0]=c[0][0]-a[0]
b[1]=c[0][1]-a[0]
b[2]=c[0][2]-a[0]
a[1]=c[1][1]-b[1]
a[2]=c[2][2]-b[2]

f=0

for i in range(3):
    for j in range(3):

        if a[i]+b[j]==c[i][j]:
            f+=1
if f==9:
    print('Yes')
else:
    print('No')            
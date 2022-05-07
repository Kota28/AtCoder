from collections import Counter
n=int(input())
a=list(map(int,input().split()))
for i in range(n):
    a.append(a[i]-1)
    a.append(a[i]+1)
c=Counter(a).most_common()
print(c[0][1])
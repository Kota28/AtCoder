n=int(input())
myset=set()
for i in range(n):
    a=int(input())
    if a in myset:
        myset.remove(a)
    else:
        myset.add(a)
print(len(myset))
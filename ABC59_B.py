a=input()
b=input()

if len(a)<len(b):
    print('LESS')
elif len(a)>len(b):
    print('GREATER')
else:
    f=0
    for i in range(len(a)):
        if a[i]>b[i]:
            print('GREATER')
            break
        elif a[i]<b[i]:
            print('LESS')
            break
        else:
            f+=1
            continue
    if f==len(a):
        print('EQUAL')
        
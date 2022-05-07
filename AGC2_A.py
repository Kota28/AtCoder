a,b=map(int,input().split())
count=0
if a<=0 and b>=0:
    print('Zero')
else:
    for i in range(a,b+1):
        if i<0:
            count+=1
    if count%2==1:
        print('Negative')
    else:
        print('Positive')
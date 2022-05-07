n=int(input())

def pro(n):
    if n%2==0:
        return 1/2
    else:
        return ((n+1)/2)/n
print(pro(n))
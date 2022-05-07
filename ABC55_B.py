import sys
n=int(input())
sys.setrecursionlimit(100000)
def ans(n):
    if n==1:
        return 1
    else:
        return n*ans(n-1)
print(ans(n)%1000000007)
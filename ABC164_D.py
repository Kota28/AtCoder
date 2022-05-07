s=input()
n=len(s)
def main():
    ans=0
    for i in range(n-3):
        for j in range(i+3,n):
            if int(s[i:j+1])%2019==0:
                ans+=1
    print(ans)
main()
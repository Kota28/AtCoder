X, N = map(int, input().split())


p = list(map(int, input().split()))

r=0
while True:
  if X-r not in p:
    print(X-r)
    exit()
  elif X+r not in p:
    print(X+r)
    exit()
  else:
    r+=1
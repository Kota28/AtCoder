n,m = map(int, input().split())
cor = set()
wa = 0
for i in range(m):
  p, s = input().split()
  p = int(p)
  if s == 'AC':
    cor.add(p)
  else:
    if not p in cor:
      wa += 1

print(*[len(cor), wa])
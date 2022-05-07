N, M = map(int, input().split())  # 頂点数，辺数
G = [[] for _ in range(N)]

for i in range(M):
    a, b = map(int, input().split())
    G[a].append(b-1)
    G[b].append(a-1)

seen = [False]*N
first_order = [0]*N
last_order = [0]*N
first_ptr = 0
last_ptr = 0


def dfs(G, v, first_ptr, last_ptr):

    first_ptr += 1
    first_order[v] = first_ptr

    seen[v] = True

    for next_v in G[v]:
        if seen[next_v]:
            continue
        dfs(G, next_v, first_ptr, last_ptr)

    last_ptr += 1
    last_order[v] = last_ptr


dfs(G, 0, first_ptr, last_ptr)

for v in range(N):
    print('{}: {}, {}'.format(v, first_order[v], last_order[v]))
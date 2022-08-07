import sys
sys.setrecursionlimit(10**9)  # 재귀 횟수 제한
N = int(input())

# graph
graph = [ [] for _ in range(N+1) ]
for _ in range(N-1):
    a, b = map(int, sys.stdin.readline().split())
    graph[a].append(b)
    graph[b].append(a)

# visited
visited = [0] * (N+1)
# print("graph", graph)

def dfs(v):
	# print(v, end=' ')
	for i in graph[v]:
		if visited[i] == 0:
			# print("v",v,"i",i)
			visited[i] = v
			dfs(i)

dfs(1)
# print(visited)
for x in range(2, N+1):
    print(visited[x])

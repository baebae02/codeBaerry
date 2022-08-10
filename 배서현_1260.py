from collections import deque

N, M, V = map(int, input().split())
nodes = [ [] for _ in range(N + 1)]
for _ in range(M):
	a, b = map(int, input().split())
	nodes[a].append(b)
	nodes[b].append(a)

for i in range(len(nodes)):
    nodes[i].sort()

visited_dfs = [False] * (N + 1)
def dfs(graph, v, visited):
	visited[v] = True
	print(v, end=' ')
	for i in graph[v]:
		if visited_dfs[i] == False:
			dfs(graph, i, visited)

dfs(nodes, V, visited_dfs)
print()
visited_bfs = [False] * (N + 1)
def bfs(graph, v, visited):
	queue = deque([v])
	visited[v] = True
	while queue:
		now = queue.popleft()
		print(now, end = ' ')
		for i in graph[now]:
			if visited[i] == False:
				queue.append(i)
				visited[i] = True

bfs(nodes, V, visited_bfs)

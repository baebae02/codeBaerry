N, K = map(int, input().split())
MAX = 100000
visited = [0] * (MAX+1)
from collections import deque

def bfs(n, k):
	q = deque([n])
	while(q):
		x = q.popleft()
		if x == k:
			return visited[x]
		for i in (x-1, x+1, x*2):
			if 0 <= i <= MAX and not visited[i]:
				visited[i] = visited[x] + 1
				q.append(i)

print(bfs(N,K))

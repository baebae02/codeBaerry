import sys
from collections import deque
n,m,v=map(int,sys.stdin.readline().split())
graph=[[] for _ in range(n+1)]
for _ in range(m):
    a,b=map(int,sys.stdin.readline().split())
    graph[a].append(b)
    graph[b].append(a)
for i in range(len(graph)):
    graph[i].sort()
    
visited=[False]*(n+1)

def bfs(n): # 반복문
    queue=deque([n])
    visited[n]=True
    while queue: 
        v=queue.popleft()
        print(v,end=' ')
        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i]=True
def dfs(n): #재귀문
    visited[n]=True
    print(n,end=' ')
    for i in graph[n]:
        if not visited[i]:
            dfs(i)

dfs(v)
print()
visited=[False]*(n+1)
bfs(v)
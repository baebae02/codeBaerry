import sys
sys.setrecursionlimit(10**9)
n=int(input())
graph=[[] for _ in range(n+1)]
for _ in range(n-1):
    a,b=map(int,sys.stdin.readline().split())
    graph[a].append(b)
    graph[b].append(a)

visited=[0]*(n+1)

def dfs(v):
    for i in graph[v]:
        if visited[i]==0:
            visited[i]=v
            dfs(i)
dfs(1)
for i in range(2,n+1):
    print(visited[i])

#[ [] [2,3] [1,4] [1,5,6] [2,7,8] [3,9,10] [3,11,12] [4] [4] [5] [5] [6] [6] ]
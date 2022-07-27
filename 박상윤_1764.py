N,M=map(int,input().split())
p=set()
q=set()
s=0
for _ in range(N):
    p.add(input())
for _ in range(M):
    q.add(input())
r = p & q
r=list(r)
r.sort()
print(len(r))
for a in range(len(r)):
    print(r[a])
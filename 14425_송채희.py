N, M=map(int, input().split())
s=set()
e=set()

for i in range(N):
    a=input()
    s.add(a)
    
for i in range(M):
    b=input()
    e.add(b)

print(len(s&e))
    

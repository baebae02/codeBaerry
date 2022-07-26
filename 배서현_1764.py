N, M = map(int, input().split())
listen, see = set(), set()
for i in range(N): listen.add(input())
for i in range(M): see.add(input())

print(len(listen & see))
for i in sorted(listen & see):
	print(i)

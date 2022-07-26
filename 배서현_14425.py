N, M = map(int, input().split())
s = set()
cnt = 0
for i in range(N):
	n = input()
	s.add(n)


for k in range(M):
	n = input()
	if n in s:
		cnt = cnt + 1

print(cnt)

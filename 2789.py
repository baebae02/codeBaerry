from itertools import combinations
N, M = map(int, input().split())
num = list(map(int, input().split()))
com = list(combinations(num, 3))
max = 0
for c in com:
	if max < sum(c) <= M:
		max = sum(c)

print(max)
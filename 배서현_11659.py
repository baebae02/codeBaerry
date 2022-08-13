import sys

N, M = map(int, sys.stdin.readline().split())
li = list(map(int, sys.stdin.readline().split()))

prefix_sum = [0]
s = 0
for i in li:
	s += i
	prefix_sum.append(s)
for _ in range(M):
	i, j = map(int, sys.stdin.readline().split())
	print(prefix_sum[j] - prefix_sum[i-1])

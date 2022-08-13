import sys
N, K = map(int, sys.stdin.readline().split())
temp = list(map(int, sys.stdin.readline().split()))

prefix_sum = [0]
total_sum = []
s = 0
for i in temp:
	s += i
	prefix_sum.append(s)
for j in range(N-K+1):
	total_sum.append(prefix_sum[j+K] - prefix_sum[j])

print(max(total_sum))

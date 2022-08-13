import sys

N, M = map(int, sys.stdin.readline().split())
arr = list(map(int, input().split()))
temp = 0
prefix_sum = [0]

for i in arr:
    temp += i
    prefix_sum.append(temp)

for _ in range(M):
    i, j = map(int, sys.stdin.readline().split())
    print(prefix_sum[j]-prefix_sum[i-1])

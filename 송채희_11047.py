import sys

input = sys.stdin.readline
N, K = map(int, input().split())

lst = []
for _ in range(N):
    lst.append(int(input()))

cnt = 0
for i in range(N-1, -1, -1):
    cnt += K//lst[i]
    K %= lst[i]

print(cnt)

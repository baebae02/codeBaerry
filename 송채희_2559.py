import sys
input = sys.stdin.readline

N, K = map(int, input().split())
arr = list(map(int, input().split()))

result = []
tmp = sum(arr[:K])
result.append(tmp)

for i in range(K, N):
    tmp += arr[i]-arr[i-K]
    result.append(tmp)

print(max(result))

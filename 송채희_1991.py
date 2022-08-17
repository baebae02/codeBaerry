# N = int(input())
# arr = list(map(int, input().split()))
# print(min(arr), max(arr))

# import sys

# N = int(sys.stdin.readline())
# arr = list(map(int, sys.stdin.readline().split()))
# arr.sort()
# print(arr[0], arr[-1])

# #max함수, min함수 사용
# total = 0
# lst = []
# for i in range(10):
#     N, M = map(int, input().split())
#     result = M-N
#     total += result
#     lst.append(total)

# print(max(lst))

# #최댓값 갱신
# import sys
# passenger=0
# result=0

# for _ in range(10):
#     N, M=map(int, sys.stdin.readline().split())
#     passenger+=M-N
#     result=max(result, passenger) #크면 overwrite되어짐, 아니면 그대로 유지

# print(result)

# lst = []
# for _ in range(9):
#     lst.append(int(input()))

# for i in range(8):
#     for j in range(i+1, 9):
#         if sum(lst)-(lst[i]+lst[j]) == 100:
#             a = lst[i]
#             b = lst[j]
#             lst.sort()

# lst.remove(a)
# lst.remove(b)
# lst.sort()
# for i in lst:
#     print(i)
# import sys

# N, M = map(int, sys.stdin.readline().split())
# arr = list(map(int, input().split()))
# temp = 0
# prefix_sum = [0]

# for i in arr:
#     temp += i
#     prefix_sum.append(temp)

# for _ in range(M):
#     i, j = map(int, sys.stdin.readline().split())
#     print(prefix_sum[j]-prefix_sum[i-1])

# 최댓값 갱신
import sys
N, K = map(int, input().split())
arr = list(map(int, input().split()))

tmp = sum(arr[:K])
result = tmp
for i in range(K, N):
    tmp += arr[i] - arr[i-K]
    result = max(result, tmp)

print(result)

# max함수 이용
input = sys.stdin.readline

n, k = map(int, input().split())
a = list(map(int, input().split()))

result = []
result.append(sum(a[:k]))

for i in range(n - k):
    result.append(result[i] - a[i] + a[k+i])

print(max(result))

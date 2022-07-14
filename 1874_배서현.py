from collections import deque
stack = deque()
ans = []
n = int(input())

k = 1
for i in range(n):
    num = int(input())
    while k <= num:
        stack.appendleft(k)
        ans.append('+')
        k += 1
    if num == stack[0]:
        stack.popleft()
        ans.append('-')
    else:
        ans = "NO"
        break
if ans == "NO":
    print("NO")
else:
    print(*ans)

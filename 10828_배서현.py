from collections import deque
import sys

n = int(sys.stdin.readline())
st = deque()
for _ in range(n):
    command = sys.stdin.readline().split()
    if command[0] == 'push':
        st.appendleft(command[1])
    elif command[0] == 'pop':
        if len(st) == 0:
            print(-1)
        else:
            print(st.popleft())
    elif command[0] == 'size':
        print(len(st))
    elif command[0] == 'empty':
        print(int(len(st) == 0))
    elif command[0] == 'top':
        if len(st) == 0:
            print(-1)
        else:
            print(st[0])

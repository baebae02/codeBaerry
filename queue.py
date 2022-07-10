from collections import deque
dq = deque([1, 2, 3]) #값이 (1, 2, 3)인 양방향 큐 생성
dq.append(4) #dq의 오른쪽에 4 enqueue
x = dq.pop() #dq의 오른쪽 값을 dequeue해서 x에 대입
dq.appendleft(0) #dq의 왼쪽에 0을 enqueue
y = dq.popleft() #dq의 왼쪽 값을 dequeue해서 y에 대입

print(x, y) #4 0

import sys
from collections import deque

n = int(input())

for a in range(n):
    count_th=deque()
    q=deque([])
	# 1.
    # N, M = list(map(int, input().split()))
	# 입력값이 두개로 정해져서 들어온다면 deque나 리스트로 받기보단 다음처럼 정수화해서 받기를 추천합니다.
    count_th=sys.stdin.readline().split()
    q=deque(sys.stdin.readline().split())

    index=[]
	# 2. 
	# index = list(range(len(count_th)))와 같은 간단한 방법도 있으니 참고하세요 :) 
    for a in range(int(count_th[0])):
        index=index+[a]
    
    index=deque(index)
    index[int(count_th[1])]='target'

    order=0

    while True:
		# 3. 
		# 정수화를 하지 않아 비교구문에서 에러가 생겼습니다. 이럴 경우를 대비해서 리스트 화 한 후 정수로 저장하는 것을 추천합니다. (1번 참고)
        if int(q[0]) == int(max(q)):
            order+=1

            if (index[0])=='target':
                print(order)
                break
            else:
                q.popleft()
                index.popleft()
        else:
			# 4. 
			# 42번째 줄에서 index[0]이 아닌 q[0]을 써서 에러가 났습니다. 
            q.append(q[0])
            index.append(index[0])
            q.popleft()
            index.popleft()

import sys
from collections import deque

n=int(input())



for a in range(n):
    #count_th=deque()
    #q=deque([])

    N,M=map(int,input().split())
    q=deque(sys.stdin.readline().split())

    #index=deque([])
    #for a in range(int(count_th[0])):
    #    index.append(a)
    index=list(range(N))
    
    index=deque(index)
    index[M]='target'
    #4 2
    # index=[0 1 2 3] -> [0 target 2 3]
    # q=[1 2 3 4]

    order=0

    while True:
        if int(q[0])==max(map(int,q)):
            order+=1

            if index[0]=='target':
                print(order)
                break
            else:
                q.popleft()
                index.popleft()
                

        else:
            q.append(q[0]) #q=[2 3 4 1]
            index.append(index[0]) #index=[target 2 3 0]
            q.popleft()
            index.popleft()
            #q=[4 1 2 3]
            #index=[3 0 target 2]

            #q=[3 1 2]
            #index=[2 0 target]

            #q=[2 1]
            #index=[target 0]


    
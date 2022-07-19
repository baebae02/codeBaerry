#최대 힙 
import sys
import heapq

heap=[]
num=int(sys.stdin.readline())
for _ in range(num):
    command=int(sys.stdin.readline())
    if command==0:
        if len(heap)!=0:
            print(-heapq.heappop(heap))
            print(heap)       
        else:
            print('0')
    elif command>0 and command<2**31:
        heapq.heappush(heap,-command)
        print(heap)

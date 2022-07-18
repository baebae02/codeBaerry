import heapq
import sys

arr=[]
N=int(input())
for i in range(N):
    x=int(sys.stdin.readline())
    if x==0:
        if len(arr)==0:
            print('0')
        else:
            print(heapq.heappop(arr)[1])
    else:
        heapq.heappush(arr, (-x, x))
from itertools import combinations
import sys
N,M=map(int,sys.stdin.readline().split())
card=list(map(int,sys.stdin.readline().split()))
l=list(combinations(card,3))
sum=set()
for i in l:
    sum.add(i[0]+i[1]+i[2])
sum=sorted(sum)
s=[data for data in sum[0:] if data<=M]
#while 1:
#    if sum[-1]>M:
#        sum.remove(sum[-1])
#    else:
#        break
print(max(s))
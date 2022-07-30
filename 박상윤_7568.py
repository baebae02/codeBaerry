import sys
N=int(input())
l=[]
for _ in range(N):
    x,y=map(int,sys.stdin.readline().split())
    l.append((x,y))
#print(l)
s_list=[]
for a in l:
    s=1
    for b in l:
        if a[0]<b[0] and a[1]<b[1]:
            s+=1
    s_list.append(s)
print(*s_list)

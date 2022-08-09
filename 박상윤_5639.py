import sys
sys.setrecursionlimit(10**6)
def post(start,end):
    if start>end:
        return

    root=pre[start]
    idx=start+1

    while idx<=end:
        if pre[idx]>root:
            break
        idx+=1
    
    post(start+1,idx-1)
    post(idx,end)
    print(root)

pre=[]
for _ in range(9):
    pre.append(int(input()))
#while True:
#    try:
#        pre.append(int(input()))
#    except:
#        break

post(0,len(pre)-1)

#50 30 24 5 28 45 98 52 60
#len=9
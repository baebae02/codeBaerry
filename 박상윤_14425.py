N,M=input().split() # =map(int,input().split())
l=[]
s=0
count=0
for a in range(int(N)):
    l.append(input())
for _ in range(int(M)):
    str=input()
    if str in l:
        s+=1
print(s)

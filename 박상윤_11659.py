n,m=map(int,input().split())
l=[0]+list(map(int,input().split()))
#print(l)
sum=[0]*(n+1)
sum[0]=l[0]
sum[1]=l[1]
for a in range(2,n+1):
    sum[a]=sum[a-1]+l[a]
#print(sum)
for _ in range(m):
    i,j=map(int,input().split())
    print(sum[j]-sum[i-1])

# print(l)
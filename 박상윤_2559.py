n,k=map(int,input().split())
t=[0]+list(map(int,input().split()))
sum=[0]*(n+1)
for a in range(1,n+1):
    sum[a]=sum[a-1]+t[a]
sums=[sum[b]-sum[b-k] for b in range(k,n+1)]
print(max(sums))
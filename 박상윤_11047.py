n,k=map(int,input().split())
coin=[]
cnt=0
remain=0
for _ in range(n):
    coin.append(int(input()))
for i in range(len(coin)):
    cnt += k//coin[-1]
    k%=coin[-1]
    coin.pop()
print(cnt)